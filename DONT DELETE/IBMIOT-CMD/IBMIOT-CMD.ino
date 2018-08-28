#include <ESP8266WiFi.h>
#include <PubSubClient.h> // https://github.com/knolleary/pubsubclient/releases/tag/v2.3
#include <SoftwareSerial.h>

const char* ssid = "ApartmentBuSantoso";
const char* password = "00001111";

#define ORG "izz8w5"
#define DEVICE_TYPE "Microcons"
#define DEVICE_ID "ESP8266-1"
#define TOKEN "znInzfk0S_xgCFxkR_"

char server[] = ORG ".messaging.internetofthings.ibmcloud.com";
char topic[] = "iot-2/cmd/test/fmt/String";
char authMethod[] = "use-token-auth";
char token[] = TOKEN;
char clientId[] = "d:" ORG ":" DEVICE_TYPE ":" DEVICE_ID;

char cmd = '\0';

void callback(char* topic, byte* payload, unsigned int payloadLength);

WiFiClient wifiClient;
PubSubClient client(server, 1883, callback, wifiClient);

int ledPin = 14;

void setup() {
  Serial.begin(115200);
  Serial.println();
  wifiConnect();
  mqttConnect();
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (!client.loop()) {
    mqttConnect();
  }

  switch (cmd) {
    case '0':
      digitalWrite(ledPin, LOW);
      break;
    case '1':
      digitalWrite(ledPin, HIGH);
      break;
    case '2':
//      analogWrite(ledPin, 255);
      analogWrite(ledPin, 1023);
      break;
    case '3':
//      analogWrite(ledPin, 100);
      analogWrite(ledPin, 512);
      break;
    case '4':
      analogWrite(ledPin, 0);
      break;
    default:
      digitalWrite(ledPin, LOW);
      break;
  }

  //  if (cmd == "1") {
  //    digitalWrite(ledPin, HIGH);
  //  } else if (cmd == "0") {
  //    digitalWrite(ledPin, LOW);
  //  } else if (cmd == "255") {
  //    analogWrite(ledPin, 255);
  //  } else if (cmd == "100") {
  //    analogWrite(ledPin, 100);
  //  }
}

void wifiConnect() {
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);
  Serial.print("WL_CONNECTED: ");
  Serial.println(WL_CONNECTED);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.print("WiFi connected, IP address: ");
  Serial.println(WiFi.localIP());
}

void mqttConnect() {
  if (!client.connected()) {
    Serial.print("Reconnecting MQTT client to ");
    Serial.println(server);

    while (!client.connect(clientId, authMethod, token)) {
      Serial.print(".");
      delay(500);
    }

    initManagedDevice();
    Serial.println();
  }
}

void initManagedDevice() {
  if (client.subscribe(topic)) {
    Serial.println("subscribe to cmd OK");
  } else {
    Serial.println("subscribe to cmd FAILED");
  }
}

void callback(char* topic, byte* payload, unsigned int payloadLength) {
  Serial.print("callback invoked for topic: "); Serial.print(topic);

  for (int i = 0; i < payloadLength; i++) {
    cmd = (char)payload[i];
    //    Serial.print((char)payload[i]);
  }

  Serial.println(cmd);

  //  switch (cmd) {
  //    case '1':
  //      digitalWrite(ledPin, HIGH);
  //      break;
  //    case '0':
  //      digitalWrite(ledPin, LOW);
  //      break;
  //    default:
  //      digitalWrite(ledPin, LOW);
  //      break;
  //  }
}
