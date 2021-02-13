#include "GamingStudent.h"

GamingStudent::GamingStudent(string gamingDevice, int hour, string collegeName, string programName, int semester, string name, int age) : Student(collegeName, programName, semester, name, age)
{
	setGamingDevice(gamingDevice);
	setHours(hour);
}