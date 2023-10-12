#include <iostream>
#include "Integer.h"

Integer::Integer()
{
    std::cout << "Integer()" << std::endl;
    m_pInt = new int{ 0 };
}

Integer::Integer(int value)
{
    std::cout << "Integer(" << value <<":int)" << std::endl;

    m_pInt = new int{ value };
}

// Copy contructure
Integer::Integer(const Integer& obj)
{
    std::cout << "Integer(" << *obj.m_pInt << ":const Integer& obj)" << std::endl;

    m_pInt = new int{ *obj.m_pInt };
}

// Move contructor
Integer::Integer(Integer&& obj)
{
    std::cout << "Integer(" << *obj.m_pInt << ": Integer&& obj)" << std::endl;

    m_pInt = new int{ *obj.m_pInt };
    obj.m_pInt = nullptr;
}

Integer Integer::operator+(const Integer& a) const
{
    std::cout << "In operator+ =============" << std::endl;

    Integer temp;
    *temp.m_pInt = *m_pInt + *a.m_pInt;

    std::cout << "End operator+ =============" << std::endl;

    return temp;
}

Integer& Integer::operator=(const Integer& a)
{
    std::cout << "operator=(" << *a.m_pInt << ":const Integer& a)" << std::endl;

    if (&a == this)
    {
        return* this;
    }

    delete m_pInt;
    m_pInt = new int{ *a.m_pInt };
    return *this;
}

Integer& Integer::operator=(Integer&& a)
{
    std::cout << "operator=(Integer&& a)" << std::endl;

    if (&a == this)
    {
        return*this;
    }

    m_pInt = a.m_pInt;
    a.m_pInt = nullptr;

    return *this;
}

Integer::operator int()
{
    std::cout << "operator int(): "<< *m_pInt << std::endl;
    return *m_pInt;
}

Integer::~Integer()
{
    std::cout << "~Integer()" << std::endl;
    delete m_pInt;
}

void Integer::Print()
{
    std::cout << "The value is: " << *m_pInt << std::endl;
}

void Integer::SetValue(int value)
{
    *m_pInt = value;
}

int Integer::GetValue() const
{
    return *m_pInt;
}