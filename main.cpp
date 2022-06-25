#include "libs.h"

int main() {

	cout << "Task1" << endl;
	Student student;
	student.setNameStudent("Student");
	student.setFamilyStudent("Family Student");
	student.setLastNameStudent("Last Name student");
	student.setCityStudent("City");
	student.setCountryStudent("Some Country");
	DateBirth dateBirth;
	dateBirth.day = 30;
	dateBirth.month = MonthEnum::April;
	dateBirth.year = 1999;
	student.setDateBirth(dateBirth);
	student.setPhoneStudent("Some phone");
	student.setGroupNumberStudent("Some group number");
	School school;
	school.setCitySchool("City school");
	school.setCountrySchool("Country school");
	school.setNameSchool("Name school");
	student.setSchoolStudent(school);
	student.printStudent();

	cout << "Task2" << endl;

	Point point(2, 5, 8);
	//«бережемо дан≥ у файл

	point.savePointsToTXT("coordsTXT.txt");

	//зчитаЇмо дан≥ з файлу

	point.readPointsFromTXT("coordsTXT.txt");
	
	//друк даних
	point.printCoords();


	_getch();
	return 0;
}