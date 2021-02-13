#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Student : public Person
{
	//Name of College, Program enrolled into, Current semester #
private:
	string m_collegeName;
	string m_programName;
	int m_semester;
	
public:
	Student() {
		m_collegeName = "";
		m_programName = "";
		m_semester = 0;
		
	}
	Student(string collegeName, string programName, int semester, string name, int age);
	~Student();
	void setCollegeName(string collegeName) {
		m_collegeName= collegeName;
	}
	void setProgramName(string programName) {
		m_programName= programName;
	}
	string GetCollegeName() {
		return m_collegeName;
	}
	string GetProgramName() {
		return m_programName;
	}
	void setSemester(int semester)
	{
		m_semester = semester;
	}
	int getSemester() {
		return m_semester;
	}
	int GetAge() override{
		return m_age;
	}
	virtual int GetHours() = 0;
};

