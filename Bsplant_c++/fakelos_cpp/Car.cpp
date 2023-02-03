#include Car.h

Car::Car() {
    passenger_capacity = 0;
}

void Car::carry_passengers(int passengers) {
    passenger_capacity = passengers;
}
