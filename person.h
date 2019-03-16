#pragma once

#include <iostream>
#include <string>

class Person
{
public:
	//() <-파라미터, 값이 있어야함.
	void SetInfo(std::string name, int age = 0, float weight = 0, float height = 0);
	void PrintInfo();

private:
	void SetName(std::string name);
	void SetAge(int age);
	void SetWeight(float weight);
	void SetHeight(float height);

private:
	std::string m_Name{};
	int m_Age{};
	float m_Weight{};
	float m_Height{};

};