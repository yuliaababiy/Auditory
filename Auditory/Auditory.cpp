#include "Auditory.h"

template <typename T>
Auditory<T> :: Auditory<T>(int number, T area, int twoDesk, int threeDesk) 
	: number(number), area(area), twoDesk(twoDesk), threeDesk(threeDesk){}

template <typename T>
void Auditory<T> :: displayIntoFile(ostream& out)
{
	out << " Number: " << number << " Area: " << area << " TwoDesk: " << twoDesk << " Three Desk: " << threeDesk << endl;
}

template <typename T>
void Auditory<T> :: display()
{
	cout << " Number: " << number << " Area: " << area << " TwoDesk: " << twoDesk << " Three Desk: " << threeDesk << endl;
}

template<typename T>
void Auditory<T>::saveWithSpaces(ostream& out)
{
	out << " Number: " << number << " Area: " << area << " TwoDesk: " << twoDesk << " Three Desk: " << threeDesk << endl;
}

template<typename T>
int Auditory<T>::getNumber()
{
	return number;
}

template <typename T>
int Auditory<T> ::getArea()
{
	return area;
}

template <typename T>
int Auditory<T> ::getFloor()
{
	return number / 100;
}


