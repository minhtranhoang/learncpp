#include <iostream>
#include "Account.h"

Account::Account(const std::string& name, float balance): m_Name(name), m_Balance(balance)
{
	m_AccNo = 0;
}

Account::~Account()
{
	m_AccNo = 0;
}

const std::string Account::GetName() const
{
	return m_Name;
}

float Account::GetBalance() const
{
	return m_Balance;
}

int Account::GetAccountNo() const
{
	return m_AccNo;
}

void Account::AccumulateInterest()
{
	
}

void Account::Withdraw(float amount)
{
	if (m_Balance >= amount)
	{
		m_Balance -= amount;
	}
	else
	{
		std::cout << "Insufficent balance" << std::endl;
	}
}

void Account::Deposit(float amount)
{
	m_Balance += amount;
}

float Account::GetInterestRate() const
{
	return 0.0f;
}
