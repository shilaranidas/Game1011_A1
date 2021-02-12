#include "Student.h"

Student::Student(string collegeName, string programName, int semester, string name, int age): Person(name, age)
{
	m_collegeName = collegeName;
	m_programName = programName;
	m_semester = semester;
}

Student::~Student()
{
}
