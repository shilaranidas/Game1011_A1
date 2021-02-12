#include <iostream>
#include <string>
#include "Student.h"
class Survey
{
private:
	int m_noOfParticipents;
	int m_maxNo;
	int m_avgAgeNonGaming;
	string m_mostPreferedService;
	int m_avgHgNonGaming;
	int m_avgAgeGaming;
	string m_MostPreferedDevice;
	int m_avgHgGaming;
public:
	Student* m_participants;
	Survey()
	{
		m_maxNo = 10;
		m_noOfParticipents = 0;
		m_avgAgeNonGaming = 0;
		m_mostPreferedService = "";
		m_avgHgNonGaming = 0;
		m_avgAgeGaming = 0;
		m_MostPreferedDevice = "";
		m_avgHgGaming = 0;
		
		//m_participants = new Student[m_maxNo];
	}
};

