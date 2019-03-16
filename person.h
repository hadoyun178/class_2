#pragma once

#include <iostream>
#include <string>

class Person
{
public:
	//() <-파라미터, 값이 있어야함.
	void SetName(std::string name);

	void PrintInfo();

private:
	std::string m_Name{};
	int m_Age{};
	float m_Weight{};
	float m_Height{};

};