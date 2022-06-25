#pragma once

class School {

	string _name;                    // ����� ����������� �������
	string _city;                    // ����� ����
	string _country;                 //����� �����

public:
	School();
	School(School&);
	School(string, string, string);
	void setNameSchool(string);
	void setCitySchool(string);
	void setCountrySchool(string);
	string getNameSchool();
	string getCitySchool();
	string getCountrySchool();


	~School();

};
