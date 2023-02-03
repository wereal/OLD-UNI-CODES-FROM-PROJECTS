#ifndef TRUCK_H
#define TRUCK_H

#include Vehicle.h

class Truck : public Vehicle {
    public:
        Truck(Engine& engine, float cargo_capacity);
        virtual ~Truck();
        void load_cargo(void* cargo);
        void unload_cargo();
        
    private:
        float cargo_capacity_;
};

#endif // TRUCK_H
