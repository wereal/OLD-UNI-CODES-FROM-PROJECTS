#ifndef CAR_H
#define CAR_H
#include Vehicle.h

class Car : public Vehicle {
    public:
        int passenger_capacity;
        void carry_passengers(int passengers);
        Car();
};
#endif
