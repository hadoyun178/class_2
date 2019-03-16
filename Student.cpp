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

	std::cout << "학교 이름 : " << m_SchoolName << std::endl;
	std::cout << "학년 : " << m_Year << std::endl;
	std::cout << "반 : " << m_Classroom << std::endl;
}