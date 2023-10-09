#include "Car.h"
#include <iostream>

Car::Car()
{
    fuel = 0;
    speed = 0;
    passengers = 0;

    std::cout << "Call Car()";
}

Car::Car(float amount)
{
    fuel = amount;
    speed = 0;
    passengers = 0;

    std::cout << "Call Car(float amount)";
}

Car::~Car()
{
    std::cout << "Call ~Car()";
}

void Car::FillFuel(float amount)
{
}

void Car::Accelerate()
{
}

void Car::Brake()
{
}

void Car::AddPassengers(int count)
{
}

void Car::Dashboard()
{
}
