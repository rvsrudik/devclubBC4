#include <iostream>
#include "Point.h"
#include "Car.h"

Car::Car(double capacity, double consumption, const Point& location, const std::string& model) {
    
    this->fuelAmount = capacity;
    this->fuelCapacity = capacity;
    this->fuelConsumption = consumption;
    this->location = location;
    this->model = model;
}

Car::~Car() {};

double Car::getFuelAmount() const {
    return this->fuelAmount;
}

double Car::getFuelCapacity() const {
    return this->fuelCapacity;
}

double Car::getFuelConsumption() const {
    return this->fuelConsumption;
}

const Point& Car::getLocation() const {
    return this->location;
}

const std::string& Car::getModel() const {
    return this->model;
}

void Car::drive(const Point& destination) {
    double fuelNeeded;
    
    fuelNeeded = location.distance(destination) * this->fuelConsumption;
    if ( fuelNeeded > this->fuelAmount ) {
        throw OutOfFuel();
    }
    this->fuelAmount -= fuelNeeded;
    this->location = destination;
}

void Car::drive(double x, double y) {
    Point destination(x, y);
    double fuelNeeded;
    
    fuelNeeded = location.distance(destination) * this->fuelConsumption;
    if ( fuelNeeded > this->fuelAmount ) {
        throw OutOfFuel();
    }
    this->fuelAmount -= fuelNeeded;
    this->location = destination;
}


void Car::refill(double fuel) {
    double expectedFuel = this->fuelAmount + fuel;
    if ( expectedFuel > this->fuelCapacity) {
        throw ToMuchFuel();
    }
    
    this->fuelAmount = expectedFuel;
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << "fuelAmount: " << car.getFuelAmount() << ";\n"
        << "fuelCapacity: " << car.getFuelCapacity() << ";\n"
        << "fuelConsumption: " << car.getFuelConsumption() << ";\n"
        << "location: " << car.getLocation() << ";\n"
        << "model: " << car.getModel() << ";";
    return out;
}

