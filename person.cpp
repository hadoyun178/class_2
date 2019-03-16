#include "Person.h"

void Person::SetInfo(std::string name, int age, float weight, float height)
{
	SetName(name);
	SetAge(age);
	SetWeight(weight);
	SetHeight(height);
}

void Person::SetName(std::string name)
{
	m_Name = name;
}

void Person::SetAge(int age)
{
	m_Age = age;
}

void Person::SetWeight(float weight)
{
	m_Weight = weight;
}

void Person::SetHeight(float height)
{
	m_Height = height;
}


void Person::PrintInfo()
{
	std::cout << "�̸� : " << m_Name << std::endl;
	if (m_Age == 0)
	{
		std::cout << "���� : " << " ? " << "��" << std::endl;
	}
	else
	{
		std::cout << "���� : " << m_Age << "��" << std::endl;
	}

	if (m_Weight == 0)
	{
		std::cout << "������ : " << " ? " << " kg" << std::endl;
	}
	else
	{
		std::cout << "������ : " << m_Weight << " kg" << std::endl;
	}
	if (m_Height == 0)
	{
		std::cout << "���� : " << " ? " << " cm" << std::endl << std::endl;
	}
	else
	{
		std::cout << "���� : " << m_Height << " cm" << std::endl << std::endl;
	}
}