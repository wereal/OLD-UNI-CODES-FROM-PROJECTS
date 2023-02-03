#ifndef DRIVER_H
#define DRIVER_H

#include Employee.h

class Driver : public Employee {
    public:
        void drive(Vehicle vehicle, std::string destination);
};

#endif
