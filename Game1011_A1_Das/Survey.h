#include <iostream>
#include <string>
#include <map>
#include "Student.h"
class Survey
{
private:
	int m_noOfParticipants;
	int m_currentNo;
	int m_noOfNonGamingStudent;
	int m_noOfGamingStudent;
	int m_avgAgeNonGaming;
	int m_totAgeNonGaming;
	string m_mostPreferedService;
	int m_avgHrNonGaming;
	int m_totHrNonGaming;
	int m_avgAgeGaming;
	int m_totAgeGaming;
	string m_MostPreferedDevice;
	int m_avgHrGaming;
	int m_totHrGaming;
public:
	Student** m_participants;
	Survey()
	{
		m_currentNo = 0;
		m_noOfParticipants = 0;
		m_avgAgeNonGaming = 0;
		m_totAgeNonGaming = 0;
		m_mostPreferedService = "";
		m_avgHrNonGaming = 0;
		m_avgAgeGaming = 0;
		m_totHrNonGaming = 0;
		m_totAgeGaming = 0;
		m_MostPreferedDevice = "";
		m_avgHrGaming = 0;
		m_totHrGaming = 0;
		m_noOfNonGamingStudent = 0;
		m_noOfGamingStudent = 0;
		//m_participants = new Student[m_maxNo];
	}
	Survey(int noOfParticipants)
	{
		m_noOfParticipants = noOfParticipants;
		m_participants = new Student* [m_noOfParticipants];
		m_currentNo = 0;
		m_avgAgeNonGaming = 0;
		m_totAgeNonGaming = 0;
		m_mostPreferedService = "";
		m_avgHrNonGaming = 0;
		m_avgAgeGaming = 0;
		m_totHrNonGaming = 0;
		m_totAgeGaming = 0;
		m_MostPreferedDevice = "";
		m_avgHrGaming = 0;
		m_totHrGaming = 0;
		m_noOfNonGamingStudent = 0;
		m_noOfGamingStudent = 0;
	}
	int getNoOfNonGamingStudent() {
		return m_noOfNonGamingStudent;
	}
	int getNoOfGamingStudent() {
		return m_noOfGamingStudent;
	}
	int getAvgAgeNonGaming() {
		return m_avgAgeNonGaming;
	}
	int getAvgAgeGaming() {
		return m_avgAgeGaming;
	}
	int getAvgHrNonGaming() {
		return m_avgHrNonGaming;
	}
	int getAvgHrGaming() {
		return m_avgHrGaming;
	}
	string getMostPreferedService() { return m_mostPreferedService; }
	string getMostPreferedDevice() { return m_MostPreferedDevice; }
	void addParticipant(Student* student, int StudentType);

	void GenerateData();
	void processSurvey();
	~Survey() {
		delete[] m_participants;
		m_participants = nullptr;
	}
};

