#pragma once

#include <iostream>
#include <string>

class Person
{
public:
	//() <-파라미터, 값이 있어야함.

	// 사람의 기본 정보를 저장하는 함수.
	// 파라미터 age, weight, height는 입력 안하면 자동으로 0으로 처리됨.
	// 파라미터 name은 반드시 입력해야 함.
	void SetInfo(std::string name, int age = 0, float weight = 0, float height = 0);

	// 기본 정보를 화면에 출력해주는 함수.
	// 자식 클래스인 Student에서 override를 하기 위해 virtual함수로 만듦!
	// 다형성(polymorphism)
	virtual void PrintInfo();

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