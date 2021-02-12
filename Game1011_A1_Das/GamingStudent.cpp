#include "GamingStudent.h"

GamingStudent::GamingStudent(string gd, int hour, string collegeName, string programName, int semester, string name, int age) : Student(collegeName, programName, semester, name, age)
{
	m_gamingDevice = gd;
	m_hour = hour;
}