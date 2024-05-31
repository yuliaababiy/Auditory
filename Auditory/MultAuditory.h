#ifndef  MULTAUDITORY_H
#define MULTAUDITORY_H
#include "Auditory.h"
#include <iostream>
using namespace std;

template<typename T>
class MultAuditory : public Auditory<T> {
protected:
	string nameEquipment;
public:
	MultAuditory(int number, T area, int twoDesk, int threeDesk, string nameEquipment);
	void displayIntoFile(ostream& out) override;
	void saveWithSpaces(ostream& out) override;
	void display() override;
};
#endif