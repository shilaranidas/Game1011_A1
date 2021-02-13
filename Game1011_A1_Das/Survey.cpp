#include "Survey.h"
#include <time.h>
#include "NonGamingStudent.h"
#include "GamingStudent.h"
//30 names
string nameList[] = { "William Mitchell", "Dan Wright", "Megan Terry", "Kevin Taylor", "Jake Hughes"
, "Owen Turner", "Jessica Sutherland", "Piers Grant", "Nathan North", "Keith Slater"
, "Rebecca Hart", "Peter Ross", "Yvonne Smith", "Simon Ferguson", "Tim Duncan"
, "Alan Clark", "Nathan Robertson", "Thomas Sharp", "Leonard Avery", "Alan Forsyth"
, "Andrew Underwood", "Grace Coleman", "Thomas Langdon", "Dominic Dickens", "Caroline Burgess"
, "Mary Nolan", "Eric Bond", "Alexander Tucker", "Elizabeth Martin", "Kevin Johnston" };
int nameCount = 30;
string programList[] = {"Game","Business", "HR","Programming","Art","Medical","Marketing"};
int programCount = 7;
string collegeList[] = { "GBC","Centennial", "Humber","Sheredian" };
int collegeCount = 4;
string gamingDevice[] = { "PS5", "PS4", "XBox", "NintendoSwitch", "SegaGenesis" };
int gamingDeviceCount = 5;
string streamingService[] = { "Netflix", "PrimeVideo", "Peacock", "ESPN", "Disney" };
int streamingServiceCount = 5;
int minAge = 10;
int maxAge = 60;
int hourPerDay = 24;
void Survey::addParticipant(Student* student, int StudentType)
{
	if (m_noOfParticipants > m_currentNo)
	{
		if (StudentType == 0)
		{
			m_totAgeNonGaming += student->GetAge();
			m_totHrNonGaming += student->GetHours();
			m_noOfNonGamingStudent++;
		}
		else
		{
			m_totAgeGaming += student->GetAge();
			m_totHrGaming += student->GetHours();
			m_noOfGamingStudent++;
		}
		m_participants[m_currentNo] = student;
		m_currentNo++;
	}
}
void Survey::GenerateData()
{
	int studentType = 0, //1 for gamer, 0 for non gamer
		nameIndex = 0,
		deviceIndex = 0,
		streamingInex = 0,
		hour = 0,
		age = 0,
		collegeIndex = 0,
		programIndex = 0,
		semester=0;
	for (int i = 0; i < m_noOfParticipants; i++)
	{
		srand(time(NULL));
		studentType = rand() % 2;
		srand(time(NULL));
		streamingInex = rand() % streamingServiceCount;
		srand(time(NULL));
		deviceIndex = rand() % gamingDeviceCount;
		srand(time(NULL));
		hour = rand() % hourPerDay;
		srand(time(NULL));
		collegeIndex = rand() % collegeCount;
		srand(time(NULL));
		programIndex = rand() % programCount;
		srand(time(NULL));
		semester = rand() % 8;
		srand(time(NULL));
		nameIndex = rand() % nameCount;
		srand(time(NULL));
		age = minAge+rand() % (maxAge-minAge);
		////if all student of one type generated then forcely convert last one to others
		//if (this->getNoOfGamingStudent() == 0 && (m_noOfParticipants - 1) == i)// no gaming students
		//{
		//	studentType = 1;
		//}
		//if (this->getNoOfNonGamingStudent() == 0 && (m_noOfParticipants - 1) == i) //no non gaming students
		//{
		//	studentType = 0;
		//}
		if (studentType == 0)//non gamer
		{
			NonGamingStudent* student = nullptr;
			student = new NonGamingStudent(streamingService[streamingInex],hour,collegeList[collegeIndex],programList[programIndex],semester,nameList[nameIndex],age);
			addParticipant(student, studentType);
		}
		else if (studentType == 1)//gamer
		{
			GamingStudent* student = nullptr;
			student =new GamingStudent(gamingDevice[deviceIndex], hour, collegeList[collegeIndex], programList[programIndex], semester, nameList[nameIndex], age);
			addParticipant(student, studentType);
		}
		
	}

}

void Survey::processSurvey()
{
	if(m_noOfGamingStudent>0)
	{
		m_avgAgeGaming = m_totAgeGaming / m_noOfGamingStudent;
		m_avgHrGaming = m_totHrGaming / m_noOfGamingStudent;
	}
	if (m_noOfNonGamingStudent > 0)
	{
		m_avgAgeNonGaming = m_totAgeNonGaming / m_noOfNonGamingStudent;

		m_avgHrNonGaming = m_totHrNonGaming / m_noOfNonGamingStudent;
	}
}
