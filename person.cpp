#include "person.h"

void Person::SetName(std::string name)
{
	m_Name = name;
}

void Person::PrintInfo()
{
	std::cout << "�̸� : " << m_Name << std::endl;
}