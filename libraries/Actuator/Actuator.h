/* Actuator.h
 * Author: Dimas Sheldon
 * Date Created: March 26, 2017
 */

#ifndef TRYFIRST_ACTUATOR_H
#define TRYFIRST_ACTUATOR_H

#include "Arduino.h"

class Actuator {
public:
Actuator(int en, int dir);
Actuator(int enL, int enR, int dirL, int dirR);

void forward();
void forward(int speed);
void reverse();
void reverse(int speed);
void forwardIndependent();
void forwardIndependent(int speed);
void reverseIndependent();
void reverseIndependent(int speed);

void left();

void right();

void stop();
void stopIndependent();

private:
int _en;
int _dir;
int _enL;
int _enR;
int _dirL;
int _dirR;
};

#endif //TRYFIRST_ACTUATOR_H