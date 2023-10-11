#include "Car.h"
#include <iostream>

int Car::totalCount = 0;

Car::Car():Car(0)
{
    std::cout << "Call Car()\n";
}

Car::Car(float amount):Car(amount, 0)
{
    std::cout << "Call Car(float amount)\n";
}

Car::Car(float amount, int pass)
{
    ++totalCount;

    fuel = amount;
    speed = 0;
    passenger  = pass;

    std::cout << "Call Car(float amount, int pass)\n";
}

Car::~Car()
{
    std::cout << "Call ~Car()\n";
}

void Car::FillFuel(float amount)
{
    std::cout << "Call FillFuel(float amount)\n";
    ShowCount();
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
    this->speed = 0;
    this->fuel = 0;
}

void Car::AddPassengers(int count)
{
    std::cout << "Call AddPassengers(int count)\n";
}

void Car::Dashboard() const
{
    std::cout << "Call Dashboard()\n";
    std::cout << "-fuel: " << this->fuel << std::endl;
    std::cout << "-speed: " << this->speed << std::endl;
    std::cout << "-passenger: " << this->passenger << std::endl;
}

void Car::ShowCount()
{
    std::cout << "Call ShowCount(),count is: " << totalCount << std::endl;
}
