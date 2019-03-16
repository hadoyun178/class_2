#include "Student.h"

void Student::SetSchoolInfo(std::string school_name, int year, int classroom)
{
	m_SchoolName = school_name;
	m_Year = year;
	m_Classroom = classroom;
}

void Student::PrintInfo()
{
	Person::PrintInfo();

	std::cout << "�б� �̸� : " << m_SchoolName << std::endl;
	std::cout << "�г� : " << m_Year << std::endl;
	std::cout << "�� : " << m_Classroom << std::endl;
}