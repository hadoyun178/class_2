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
	std::cout << "이름 : " << m_Name << std::endl;
	if (m_Age == 0)
	{
		std::cout << "나이 : " << " ? " << "세" << std::endl;
	}
	else
	{
		std::cout << "나이 : " << m_Age << "세" << std::endl;
	}

	if (m_Weight == 0)
	{
		std::cout << "몸무게 : " << " ? " << " kg" << std::endl;
	}
	else
	{
		std::cout << "몸무게 : " << m_Weight << " kg" << std::endl;
	}
	if (m_Height == 0)
	{
		std::cout << "신장 : " << " ? " << " cm" << std::endl << std::endl;
	}
	else
	{
		std::cout << "신장 : " << m_Height << " cm" << std::endl << std::endl;
	}
}