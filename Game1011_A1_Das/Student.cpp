#include "Student.h"

Student::Student(string collegeName, string programName, int semester, string name, int age): Person(name, age)
{
	setCollegeName(collegeName);
	setProgramName(programName);
	setSemester(semester);
}

Student::~Student()
{
}
