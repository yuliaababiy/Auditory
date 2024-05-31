#include "MultAuditory.h"

template<typename T>
MultAuditory<T> ::MultAuditory<T>(int number, T area, int twoDesk, int threeDesk, string nameEquipment)
	: Auditory<T>(number, area, twoDesk, threeDesk), nameEquipment(nameEquipment) {}

template<typename T>
void MultAuditory<T> :: displayIntoFile(ostream& out)
{
	out << "Number " << this->number << " Area: " << this->area << " TwoDesk: " << 
		this->twoDesk << " ThreeDesk: " << this->threeDesk << " NameEquipment: " << nameEquipment << endl;
 }

template<typename T>
void MultAuditory<T>::display()
{
	cout << "Number " << this->number << " Area: " << this->area << " TwoDesk: " << this->twoDesk << " ThreeDesk: " <<
		this->threeDesk << " NameEquipment: " << nameEquipment << endl;
}

template<typename T>
void MultAuditory<T> :: saveWithSpaces(ostream& out)
{
	out << "MultAuditory " << this->number << " " << this->area << " " << this->twoDesk << " " << this->threeDesk <<
		" " << nameEquipment << endl;
}

template class MultAuditory<int>;
template class MultAuditory <double>;