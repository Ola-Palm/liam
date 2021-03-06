/*
 Liam - DIY Robot Lawn Mower

 Wheel Motor Library

 ======================
  Licensed under GPLv3
 ======================
*/

#ifndef _WHEELMOTOR_H_
#define _WHEELMOTOR_H_

#include <Arduino.h>

class WHEELMOTOR {
  public:
    WHEELMOTOR(int pwmpin_, int dirpin_, int loadpin_, int smoothness);

    void setSpeed(int setspeed);
    int getSpeed();

    int getLoad();

    bool isOverloaded();

    void setOverloadLevel(int level);
    void setSmoothness(int level);

  private:
    int pwmpin;
    int dirpin;
    bool dir;
    int loadpin;
    int load;
    int speed;
    int overload_level;
    int smoothness_delay;
};

#endif /* _WHEELMOTOR_H_ */
