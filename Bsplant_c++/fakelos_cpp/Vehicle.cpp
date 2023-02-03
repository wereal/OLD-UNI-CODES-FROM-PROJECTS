#include Vehicle.h
#include iostream

Vehicle::Vehicle(Engine& engine): engine_(engine), speed_(0)
{
}

Vehicle::~Vehicle()
{
}

void Vehicle::start() {
    engine_.start();
    std::cout << "Vehicle started" << std::endl;
}

void Vehicle::stop() {
    engine_.stop();
    std::cout << "Vehicle stopped" << std::endl;
}

void Vehicle::turn_left() {
    std::cout << "Vehicle turning left" << std::endl;
}

void Vehicle::turn_right() {
    std::cout << "Vehicle turning right" << std::endl;
}

void Vehicle::move_forward() {
    std::cout << "Vehicle moving forward at " << speed_ << " mph" << std::endl;
}

void Vehicle::move_backward() {
    std::cout << "Vehicle moving backward at " << speed_ << " mph" << std::endl;
}
