#include <iostream>
#include "Gun.h"

Gun::Gun(const std::string& model, int capacity) {
    this->amount = capacity;
    this->capacity = capacity;
    this->isReady = 0;
    this->model = model;
    this->totalShots = 0; 
}

Gun::~Gun() {};

int Gun::getAmount() const {
    return this->amount;
}

int Gun::getCapacity() const {
    return this->capacity;
}

bool Gun::ready() const {
    return this->isReady;
}

const std::string& Gun::getModel() const {
    return model;
}

int Gun::getTotalShots() const {
    return totalShots;
}

void Gun::prepare() {
    this->isReady = !this->isReady;
}

void Gun::reload() {
    this->capacity = this->amount;
}

void Gun::shoot() {
    if ( this->amount == 0 ) {
        throw OutOfRounds();
    }
    if ( this->isReady == 0 ) {
        throw NotReady();
    }
    
    this->amount -= 1;
    this->totalShots += 1;
    std::cout << "Bang!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    out << "Amount: " << gun.getAmount() << ";\n"
        << "Capacity: " << gun.getCapacity() << ";\n"
        << "isReady: " << gun.ready() << ";\n"
        << "Model: " << gun.getModel() << ";\n"
        << "TotalShots: " << gun.getTotalShots() << ";";
    return out;
}
