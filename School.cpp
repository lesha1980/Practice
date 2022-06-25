#include "libs.h"

School::School()
{
	
}

School::School(School& school)
{
	
	this->_city = school.getCitySchool();
	this->_name = school.getNameSchool();
	this->_country = school.getCountrySchool();
}

School::School(string name, string city, string country)
{
	this->_city = city;
	this->_name = name;
	this->_country = country;
}

void School::setNameSchool(string name)
{
     this->_name = name;
}

void School::setCitySchool(string city)
{
	this->_city = city;
}

void School::setCountrySchool(string country)
{
	this->_country = country;
}

string School::getNameSchool()
{
	return this->_name;
}

string School::getCitySchool()
{
	return this->_city;
}

string School::getCountrySchool()
{
	return this->_country;
}

School::~School()
{
	
}
