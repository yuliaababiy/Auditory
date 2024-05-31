#include "MultAuditory.h"
#include "Auditory.h"

template<typename T>
MultAuditory<T> ::MultAuditory<T>(int number, T area, int twoDesk, int threeDesk, string nameEquipment)
	: Auditory(number, area, twoDesk, threeDesk), nameEquipment(nameEquipment) {}

template<typename T>
void MultAuditory<T> :: displayIntoFile(ostream& out)
{
	cout << " Number " << number << " Area: " << area << " TwoDesk: " << twoDesk << " ThreeDesk: " << threeDesk << " NameEquipment: " << nameEquipment << endl;
 }

template<typename T>
void MultAuditory<T> :: display()
{
	out << " Number " << number << " Area: " << area << " TwoDesk: " << twoDesk << " ThreeDesk: " << threeDesk << " NameEquipment: " << nameEquipment << endl;
}

template<typename T>
void MultAuditory<T> :: saveWithSpaces(ostream& out)
{
	out << " Number " << number << " Area: " << area << " TwoDesk: " << twoDesk << " ThreeDesk: " << threeDesk << " NameEquipment: " << nameEquipment << endl;
}

template class MultAuditory<int>;
template class MultAuditory <double>;