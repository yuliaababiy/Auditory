#include "Auditory.h"
#include "MultAuditory.h"
#include <iostream>
#include <vector>
#include <set>
#include<algorithm>
#include <fstream>
using namespace std;

template <typename T>
void displayAuditory(vector<Auditory<T>*>& auditories)
{
for (auto auditory : auditories)
{
	auditory->display();
}
auditories.clear();
}

template <typename T>
void saveToFile(vector<Auditory<T>*>& auditories, string filename)
{
	ofstream file(filename)
	{
		auditory->displayIntoFile(file);
	}
	auditories.clear();
}

template <typename T>
void loadFromFile(vector<Auditory<T>*>& auditories, string filename)
{
	ifstream file(filename);
		int number, area, twoDesk, threeDesk;
		string nameEquipment;
		sting type;
		while (file >> type >> number >> area >> twoDesk >> threeDesk >> nameEquipment)
		{
			if (type == Auditory)
			{
				auditories.push_back(new Auditory(number, area, twoDesk, threeDesk));
			}
			else if (type == MultAuditory)
			{
				auditories.push_back(new MultAuditory(number, area, twoDesk, threeDesk, nameEquipment));
			}
		}	
}
int main()
{
	vector <Auditory<int>*> auditories;
	ofstream file("input.txt", ios::app);
	int choice;
	while (true)
	{
		cout << " Enter action: " << endl;
		cout << " 1 - Load from file and print: " << endl;
		cout << " 2 - Add object to file: " << endl;
		cout << " 3 - print objects into file" << endl;
		cout << " 4 - find the floor: " << endl;
		cout << " 5 - find the biggest auditory: " << endl;
		cout << " 6 - find the area of auditories: " << endl;
		cout << " 7 - find number of auditory on each floor: " << endl;// ??
		cout << " 8 - find floors with multAuditory: " << endl;
		cout << " 9 - exit: " << endl;
		cin >> choice;
		if (choice == 1)
		{
			loadFromFile(auditories, "input.txt");
			displayAuditory(auditories);
		}
		if (choice == 2)
		{
			int number, area, twoDesk, threeDesk;
			string nameEquipment;
			string type;
			cout << "Enter type auditory: ";
				cin >> type;
				if (type == " Auditory ")
				{
					cout << "Enter number: ";
					cin >> number;
					cout << "Enter area: ";
					cin >> area;
					cout << "Enter twoDesk: ";
					cin >> twoDesk;
					cout << "Enter threeDesk: ";
					cin >> threeDesk;
					Auditory<int>* a = new Auditory<int>(number, area, twoDesk, threeDesk);
					a->saveWithSpaces(file);
				}
				if (type == " MultAuditory ")
				{
					cout << "Enter number: ";
					cin >> number;
					cout << "Enter area: ";
					cin >> area;
					cout << "Enter twoDesk: ";
					cin >> twoDesk;
					cout << "Enter threeDesk: ";
					cin >> threeDesk;
					cout << "Enter nameEquipment: ";
					cin >> nameEquipment;
					MultAuditory<int>* m = new MultAuditory<int>(number, area, twoDesk, threeDesk, nameEquipment);
					m->saveWithSpaces(file);
				}
				else
				{
					cout << "You entered wrong!" << endl;
					break;
				}
		}
		else if (choice == 3)
		{
			loadFromFile(auditories, "input.txt");
			loadFromFile(auditories, "output.txt");
		}
		
		//Find the Floor
		else if (choice == 4)
		{
			loadFromFile(auditories, "input.txt");
			int firstFloorCount = 0;
			int secondFloorCount = 0;
			int threeFloorCount = 0;
			for (auto a : auditories)
			{
				if (a->getFloor() == 1)
				{
					firstFloorCount += 1;
				}
				else if (a->getFloor() == 2)
				{
					secondFloorCount += 1;
				}
				if (a->getFloor() == 3)
				{
					threeFloorCount += 1;
				}
			}
			cout << "1 floor: " << firstFloorCount << " 2 floor: " << secondFloorCount
				<< " 3 floor: " << threeFloorCount << endl;

			ifstream file("input.txt");
			int number, area, numTwoTable, numThreeTable;
			string nameEquipment;
			string type;
			while (file >> type >> number >> area >> numTwoTable >> numThreeTable)
			{
				if (type == "MultAuditory")
				{
					cout << number / 100;
				}
			}
		}

		//The biggest auditory
		else if (choice == 4)
		{

			loadFromFile(auditories, "input.txt");
			Auditory<int>* theBiggest = new Auditory<int>(0, 0, 0, 0);
			for (auto a : auditories)
			{
				if (a->getArea() > theBiggest->getArea())
				{
					theBiggest = a;
				}
			}
			cout << "The biggest auditory: ";
			theBiggest->display();
			cout << endl;
		}
		else if (choice == 5)
		{
			loadFromFile(auditories, "input.txt");
			int overallArea = 0;
			for (auto a : auditories)
			{
				overallArea += a->getArea();
			}
			cout << "Overall area is: " << overallArea << endl;
		}
		
	}

	
}


