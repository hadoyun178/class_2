#pragma once

#include "Person.h"

// Student 클래스는 Person 클래스를 public으로 상속한다!
// 즉, Person이 부모 클래스고, Student가 자식 클래스!
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