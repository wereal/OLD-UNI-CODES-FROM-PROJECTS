#include Truck.h
#include iostream

Truck::Truck(Engine& engine, float cargo_capacity): Vehicle(engine), cargo_capacity_(cargo_capacity)
{
}

Truck::~Truck()
{
}

void Truck::load_cargo(void* cargo) {
    std::cout << "Cargo loaded onto truck" << std::endl;
}

void Truck::unload_cargo() {
    std::cout << "Cargo unloaded from truck" << std::endl;
}
