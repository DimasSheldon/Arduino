//
// Created by Sheldon on 3/26/2017.
//

#include "Actuator.h"

Actuator::Actuator(int en, int dir) {
  pinMode(en, OUTPUT);
  pinMode(dir, OUTPUT);
  _en = en;
  _dir = dir;
}

Actuator::Actuator(int enL, int enR, int dirL, int dirR) {
  pinMode(enL, OUTPUT);
  pinMode(enR, OUTPUT);
  pinMode(dirL, OUTPUT);
  pinMode(dirR, OUTPUT);
  _enL = enL;
  _enR = enR;
  _dirL = dirL;
  _dirR = dirR;
}
void Actuator::forwardIndependent() {
  digitalWrite(_dir, LOW);
  analogWrite(_en, 255);
}

void Actuator::forward() {
  digitalWrite(_dirL, LOW);
  digitalWrite(_dirR, HIGH);
  analogWrite(_enL, 255);
  analogWrite(_enR, 255);
}

void Actuator::forwardIndependent(int speed) {
  digitalWrite(_dir, LOW);
  analogWrite(_en, speed);
}

void Actuator::forward(int speed) {
  digitalWrite(_dirL, LOW);
  digitalWrite(_dirR, HIGH);
  analogWrite(_enL, speed);
  analogWrite(_enR, speed);
}

void Actuator::reverseIndependent() {
  digitalWrite(_dir, HIGH);
  analogWrite(_en, 255);
}

void Actuator::reverseIndependent(int speed) {
  digitalWrite(_dir, HIGH);
  analogWrite(_en, speed);
}

void Actuator::reverse() {
  digitalWrite(_dirL, HIGH);
  digitalWrite(_dirR, LOW);
  analogWrite(_enL, 255);
  analogWrite(_enR, 255);
}

void Actuator::reverse(int speed) {
  digitalWrite(_dirL, HIGH);
  digitalWrite(_dirR, LOW);
  analogWrite(_enL, speed);
  analogWrite(_enR, speed);
}

void Actuator::left() {
  digitalWrite(_dirL, HIGH);
  digitalWrite(_dirR, HIGH);
  analogWrite(_enL, 255);
  analogWrite(_enR, 255);
}

void Actuator::right() {
  digitalWrite(_dirL, LOW);
  digitalWrite(_dirR, LOW);
  analogWrite(_enL, 255);
  analogWrite(_enR, 255);
}

void Actuator::stop() {
  analogWrite(_enL, 0);
  analogWrite(_enR, 0);
}

void Actuator::stopIndependent() {
  analogWrite(_en, 0);
}