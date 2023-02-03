#ifndef TRANSPORT_COMPANY_H
#define TRANSPORT_COMPANY_H

#include iostream
#include vector
#include Employee.h
#include Vehicle.h

class Transport_Company {
    private:
        std::vector<Employee*> employees;
        std::vector<Vehicle*> vehicles;
    public:
        void add_Employee(Employee* employee);
        void remove_Employee(Employee* employee);
        void add_Vehicle(Vehicle* vehicle);
        void remove_Vehicle(Vehicle* vehicle);
};

#endif
