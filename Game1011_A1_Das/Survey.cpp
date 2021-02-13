#include "Survey.h"

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
void Survey::addGamingParticipant(GamingStudent* student)
{
	if (m_noOfParticipants > m_currentNo)
	{
		
			m_totAgeGaming += student->GetAge();
			m_totHrGaming += student->GetHours();
			deviceCount(student->GetGamingDevice());
			m_noOfGamingStudent++;
		
		m_participants[m_currentNo] = student;
		m_currentNo++;
	}
}
void Survey::addNonGamingParticipant(NonGamingStudent* student)
{
	if (m_noOfParticipants > m_currentNo)
	{
		
			m_totAgeNonGaming += student->GetAge();
			m_totHrNonGaming += student->GetHours();
			serviceCount(student->GetStreamingService());
			m_noOfNonGamingStudent++;
		
		
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
		
		studentType = rand() % 2;
		
		streamingInex = rand() % streamingServiceCount;
		
		deviceIndex = rand() % gamingDeviceCount;
		
		hour = rand() % hourPerDay;
		
		collegeIndex = rand() % collegeCount;
		
		programIndex = rand() % programCount;
		
		semester = rand() % 8;
		
		nameIndex = rand() % nameCount;
		
		age = minAge+rand() % (maxAge-minAge);
		
		if (studentType == 0)//non gamer
		{
			NonGamingStudent* student = nullptr;
			student = new NonGamingStudent(streamingService[streamingInex],hour,collegeList[collegeIndex],programList[programIndex],semester,nameList[nameIndex],age);
			addNonGamingParticipant(student);
		}
		else if (studentType == 1)//gamer
		{
			GamingStudent* student = nullptr;
			student =new GamingStudent(gamingDevice[deviceIndex], hour, collegeList[collegeIndex], programList[programIndex], semester, nameList[nameIndex], age);
			addGamingParticipant(student);
		}
		
	}

}

void Survey::processSurvey()
{
	if(m_noOfGamingStudent>0)
	{
		m_avgAgeGaming = m_totAgeGaming / m_noOfGamingStudent;
		m_avgHrGaming = m_totHrGaming / m_noOfGamingStudent;
		//Iterate elements and print words 
		map<string, int>::iterator itr;
		int max = 0;

		for (itr = devicesMap.begin(); itr != devicesMap.end(); ++itr) {
			if (max < itr->second)
			{
				max = itr->second;
				m_MostPreferedDevice = itr->first;
			}
		}
	}
	if (m_noOfNonGamingStudent > 0)
	{
		m_avgAgeNonGaming = m_totAgeNonGaming / m_noOfNonGamingStudent;
		
		m_avgHrNonGaming = m_totHrNonGaming / m_noOfNonGamingStudent;

		//Iterate elements and print words 
		map<string, int>::iterator itr;
		int max=0;
		
		for (itr = servicesMap.begin(); itr != servicesMap.end(); ++itr) {
			if (max < itr->second)
			{
				max = itr->second;
				m_mostPreferedService = itr->first;
			}
		}
		
	}
}
