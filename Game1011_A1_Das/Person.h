#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
	string m_name;
	int m_age;

public:
	Person() {
		m_name = "anonymous";
		m_age = 0;
	}
	Person(string name, int age);
	~Person();
	virtual int GetAge() = 0;
	void setName(string name)
	{
		m_name = name;
	}
	void setAge(int age) {
		m_age = age;
	}
};

