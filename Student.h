#pragma once
#include "School.h"
#include "DateBirth.h"

class Student {

    string _name;
    string _lastName;
    string _family;
    string _phone;
    string _city;
    string _country;
    string _groupNumber;

    School _school;
    DateBirth _dateBirth;

public:

    Student();
    Student(Student&);
    void setNameStudent(string);
    void setLastNameStudent(string);
    void setFamilyStudent(string);
    void setPhoneStudent(string);
    void setCityStudent(string);
    void setCountryStudent(string);
    void setGroupNumberStudent(string);
    string getNameStudent();
    string getLastNameStudent();
    string getFamilyStudent();
    string getPhoneStudent();
    string getCityStudent();
    string getCountryStudent();
    string getGroupNumberStudent();

    void printStudent();

    void setSchoolStudent(School);
    void setDateBirth(DateBirth);
    School getSchoolStudent();
    DateBirth getDateBirthStudent();


    ~Student();

};
