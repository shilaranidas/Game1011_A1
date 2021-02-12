#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

class GamingStudent : public Student
{
private:
	//Preferred streaming service, Hours consuming non - gaming entertainment
	string m_gamingDevice;
	int m_hour;
public:
	GamingStudent()
	{
		m_gamingDevice = "PS5";
		m_hour = 0;
	}
	GamingStudent(string gd, int hour, string collegeName, string programName, int semester, string name, int age);
	string GetGamingDevice()
	{
		return m_gamingDevice;
	}
	void setGamingDevice(string gd)
	{
		m_gamingDevice = gd;
	}
	int GetHours()
	{
		return m_hour;
	}
	void setHours(int hour)
	{
		m_hour = hour;
	}
};

