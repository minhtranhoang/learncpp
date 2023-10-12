
#pragma once

class Integer
{
private:
    int *m_pInt{};

public:
    Integer();
    Integer(int value);
    Integer(const Integer& obj);
    Integer(Integer&& obj);

    Integer operator+(const Integer& a) const;
    Integer& operator=(const Integer& a);
    Integer& operator=(Integer&& a);
    operator int();

    void SetValue(int value) ;
    int GetValue() const;
    void Print();

    ~Integer();
};