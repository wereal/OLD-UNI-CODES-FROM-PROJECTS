#include Transport_Company.h

void Transport_Company::add_Employee(Employee* employee) {
  employees.push_back(employee);
}

void Transport_Company::remove_Employee(Employee* employee) {
  for (int i = 0; i < employees.size(); i++) {
    if (employees[i] == employee) {
      employees.erase(employees.begin() + i);
    }
  }
}

void Transport_Company::add_Vehicle(Vehicle* vehicle) {
  vehicles.push_back(vehicle);
}

void Transport_Company::remove_Vehicle(Vehicle* vehicle) {
  for (int i = 0; i < vehicles.size(); i++) {
    if (vehicles[i] == vehicle) {
      vehicles.erase(vehicles.begin() + i);
    }
  }
}
