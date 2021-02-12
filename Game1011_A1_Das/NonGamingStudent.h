#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

class NonGamingStudent: public Student
{
private:
	//Preferred streaming service, Hours consuming non - gaming entertainment
	string m_streamingService;
	int m_hour;
public:
	NonGamingStudent()
	{
		m_streamingService = "Netflix";
		m_hour = 0;
	}
	NonGamingStudent(string streamingService, int hour, string collegeName, string programName, int semester, string name, int age);
	string GetStreamingService()
	{
		return m_streamingService;
	}
	void setStreamingService(string streamingService)
	{
		m_streamingService = streamingService;
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

