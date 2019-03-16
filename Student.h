#pragma once

#include "Person.h"

// Student Ŭ������ Person Ŭ������ public���� ����Ѵ�!
// ��, Person�� �θ� Ŭ������, Student�� �ڽ� Ŭ����!
class Student : public Person
{
public:
	void SetSchoolInfo(std::string school_name, int year, int classroom);

	void PrintInfo() override;

private:
	std::string m_SchoolName;
	int m_Year{};
	int m_Classroom{};
};