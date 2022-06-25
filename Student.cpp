#include "libs.h"

Student::Student()
{
	
}

Student::Student(Student& student)
{
	this->_city = student.getCityStudent();
	this->_country = student.getCountryStudent(); 
	this->_family = student.getFamilyStudent();
	this->_groupNumber = student.getGroupNumberStudent();
	this->_lastName = student.getLastNameStudent();
	this->_name = student.getNameStudent();
	this->_phone = student.getPhoneStudent();
	this->_school.setCitySchool(student.getSchoolStudent().getCitySchool());
	this->_school.setCountrySchool(student.getSchoolStudent().getCountrySchool());
	this->_school.setNameSchool(student.getSchoolStudent().getNameSchool());

	this->_dateBirth = student.getDateBirthStudent();
}

void Student::setNameStudent(string name)
{
	this->_name = name;
}

void Student::setLastNameStudent(string lastName)
{
	this->_lastName = lastName;
}

void Student::setFamilyStudent(string family)
{
	this->_family = family;
}

void Student::setPhoneStudent(string phone)
{
	this->_phone = phone;
}

void Student::setCityStudent(string city)
{
	this->_city = city;
}

void Student::setCountryStudent(string country)
{
	this->_country = country;
}

void Student::setGroupNumberStudent(string groupNumber)
{
	this->_groupNumber = groupNumber;
}

string Student::getNameStudent()
{
	return this->_name;
}

string Student::getLastNameStudent()
{
	return this->_lastName;
}

string Student::getFamilyStudent()
{
	return this->_family;
}

string Student::getPhoneStudent()
{
	return this->_phone;
}

string Student::getCityStudent()
{
	return this->_city;
}

string Student::getCountryStudent()
{
	return this->_country;
}

string Student::getGroupNumberStudent()
{
	return this->_groupNumber;
}

void Student::printStudent()
{
	cout << "Name student: " << this->_name << endl;
	cout << "Last name student: " << this->_lastName << endl;
	cout << "Family student: " << this->_family << endl;
	cout << "Phone student: " << this->_phone << endl;
	cout << "City student: " << this->_city << endl;
	cout << "Country student: " << this->_country << endl;
	cout << "Group number student: " << this->_groupNumber << endl;
	cout << "Name school: " << this->_school.getNameSchool() << endl;
	cout << "City school: " << this->_school.getCitySchool() << endl;
	cout << "Country school: " << this->_school.getCountrySchool() << endl;

}

void Student::setSchoolStudent(School school)
{
	this->_school.setNameSchool(school.getNameSchool());
	this->_school.setCitySchool(school.getCitySchool());
	this->_school.setCountrySchool(school.getCountrySchool());
}

void Student::setDateBirth(DateBirth datebirth)
{
	this->_dateBirth = datebirth;
}

School Student::getSchoolStudent()
{
	return this->_school;
}

DateBirth Student::getDateBirthStudent()
{
	return this->_dateBirth;
}

Student::~Student()
{
	
}
