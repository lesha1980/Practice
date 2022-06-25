#pragma once

class School {

	string _name;                    // назва навчального закладу
	string _city;                    // назва міста
	string _country;                 //назва країни

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
