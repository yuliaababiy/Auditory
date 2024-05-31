#ifndef  AUDITORY_H
#define AUDITORY_H
#include <iostream>
using namespace std;

template<typename T>
class Auditory
{
protected:
	int number;
	T area;
	int twoDesk;
	int threeDesk;
public:
	Auditory(int number, T area, int twoDesk, int threeDesk);
	virtual void displayIntoFile(ostream& out);
	virtual void display();
	virtual void saveWithSpaces(ostream& out);
	int getNumberPlace();
	int getNumber();
	int getArea();
	int getFloor();
};

#endif // ! AUDITORY_H

