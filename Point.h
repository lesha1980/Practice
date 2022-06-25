#pragma once


class Point {

	int _x;
	int _y;
	int _z;

public:
//-------------конструктори--------------

	Point();                           //за замовчуванням
	Point(int, int, int);              //з параметрами

//------------аксессори---------

	void setX(int);
	void setY(int);
	void setZ(int);

	int getX();
	int getY();
	int getZ();

//---------------виведення данних--------------------
	void printCoords();

//--------------збереження в файл-----------------------
	void savePointsToTXT(string filename);

//-------------завантаження з файлу------------------
	void readPointsFromTXT(string filename);


};
