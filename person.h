#pragma once

#include <iostream>
#include <string>

class Person
{
public:
	//() <-�Ķ����, ���� �־����.

	// ����� �⺻ ������ �����ϴ� �Լ�.
	// �Ķ���� age, weight, height�� �Է� ���ϸ� �ڵ����� 0���� ó����.
	// �Ķ���� name�� �ݵ�� �Է��ؾ� ��.
	void SetInfo(std::string name, int age = 0, float weight = 0, float height = 0);

	// �⺻ ������ ȭ�鿡 ������ִ� �Լ�.
	// �ڽ� Ŭ������ Student���� override�� �ϱ� ���� virtual�Լ��� ����!
	// ������(polymorphism)
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