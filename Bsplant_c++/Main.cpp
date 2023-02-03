#include iostream
#include Transport_Company.h
#include Employee.h
#include Driver.h
#include Administration_Staff.h
#include Managerial_Staff.h
#include Vehicle.h
#include Truck.h
#include Car.h
#include Engine.h

using namespace std;

int main() {
    // Initialize a transport company object
    Transport_Company transport_company;

    // Create a truck object
    Truck truck(150, Engine());

    // Create a car object
    Car car(4, Engine());

    // Create employee objects
    Driver driver("John Doe");
    Administration_Staff admin("Jane Doe");
    Managerial_Staff manager("Jim Doe");

    // Add employees to the transport company
    transport_company.add_Employee(driver);
    transport_company.add_Employee(admin);
    transport_company.add_Employee(manager);

    // Add vehicles to the transport company
    transport_company.add_Vehicle(truck);
    transport_company.add_Vehicle(car);

    // Remove an employee from the transport company
    transport_company.remove_Employee(admin);

    // Remove a vehicle from the transport company
    transport_company.remove_Vehicle(truck);

    return 0;
}
