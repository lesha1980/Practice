#pragma once


class Point {

	int _x;
	int _y;
	int _z;

public:
//-------------������������--------------

	Point();                           //�� �������������
	Point(int, int, int);              //� �����������

//------------���������---------

	void setX(int);
	void setY(int);
	void setZ(int);

	int getX();
	int getY();
	int getZ();

//---------------��������� ������--------------------
	void printCoords();

//--------------���������� � ����-----------------------
	void savePointsToTXT(string filename);

//-------------������������ � �����------------------
	void readPointsFromTXT(string filename);


};
