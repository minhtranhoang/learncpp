#include "Car.h"
#include <iostream>

Car::Car()
{
    std::cout << "Call Car()\n";
}

Car::Car(float amount)
{
    fuel = amount;
    std::cout << "Call Car(float amount)\n";
}

Car::~Car()
{
    std::cout << "Call ~Car()\n";
}

void Car::FillFuel(float amount)
{
    std::cout << "Call FillFuel(float amount)\n";
}

void Car::Accelerate()
{
    this->speed++;
    this->fuel -= 0.5f;

    std::cout << "Call Accelerate()\n";
}

void Car::Brake()
{
    std::cout << "Call Brake()\n";
}

void Car::AddPassengers(int count)
{
    std::cout << "Call AddPassengers(int count)\n";
}

void Car::Dashboard()
{
    std::cout << "Call Dashboard()\n";
}
