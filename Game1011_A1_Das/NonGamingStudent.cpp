#include "NonGamingStudent.h"

NonGamingStudent::NonGamingStudent(string streamingService, int hour, string collegeName, string programName, int semester, string name, int age): Student(collegeName, programName, semester, name, age)
{
	setStreamingService(streamingService);
	setHours(hour);
}
