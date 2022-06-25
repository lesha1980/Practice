#include "libs.h"

Point::Point()
{
}

Point::Point(int x, int y, int z)
{
	this->_x = x;
	this->_y = y;
	this->_z = z;
}

void Point::setX(int x)
{
	this->_x = x;
}

void Point::setY(int y)
{
	this->_y = y;
}

void Point::setZ(int z)
{
	this->_z = z;
}

int Point::getX()
{
	return this->_x;
}

int Point::getY()
{
	return this->_y;
}

int Point::getZ()
{
	return this->_z;
}

void Point::printCoords()
{
	cout << "X :" << this->_x << endl;
	cout << "Y :" << this->_y << endl;
	cout << "Z :" << this->_z << endl;
}

void Point::savePointsToTXT(string filename)
{
	ofstream f;
	f.open(filename, ios::app);
	if (!f.is_open()) {
		cout << "Can't open the file!" << endl;
		return;
	}
	f << "X:" << this->_x << '\n';
	f << "Y:" << this->_y << '\n';
	f << "Z:" << this->_z << '\n';
	f.close();
}

void Point::readPointsFromTXT(string filename)
{
	ifstream f;

	f.open(filename);
	if (!f.is_open()) {
		cout << "Can't open the file!" << endl;
		return;
	}

	int i = 0;
	while (!f.eof()) {
		char buf[20];
		f.getline(buf, 50);

		if (i == 0) {
			this->_x = atoi(&buf[2]);
		}
		else if (i == 1) {
			this->_y = atoi(&buf[2]);
		}
		else if(i == 2) {
			this->_z = atoi(&buf[2]);
		}

		i++;
	}
	f.close();
}
