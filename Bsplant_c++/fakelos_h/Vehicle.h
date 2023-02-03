#ifndef VEHICLE_H
#define VEHICLE_H

#include "Engine.h"

class Vehicle {
    public:
        Vehicle(Engine& engine);
        virtual ~Vehicle();
        void start();
        void stop();
        void turn_left();
        void turn_right();
        void move_forward();
        void move_backward();
        
    protected:
        Engine& engine_;
        float speed_;
};

#endif // VEHICLE_H
