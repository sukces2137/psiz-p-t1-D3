#include "pch.h"
#include "list.h"
#include <iostream>
#include <cstdlib>

using namespace std;

List* initList(void)
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));

	if (pRoot != NULL)
	{
		pRoot->pNext = NULL;
		cout << "Memory space allocated." << endl;
	}	
		else if (pRoot == NULL)
			{ 			
				cout << "Insufficient memory available." << endl;
			}	
				else
					{
						cout << "Unknown error." << endl;
					}
	return pRoot;
}

void deinitList(List* pRoot)
{
	free(pRoot);
	pRoot = NULL;
}

// Funkcja dodajaca samochod do listy wjezdzajacy na parking
void addCar(List* pRoot, char* plateNum)
{
	List* lastElem = pRoot;
	
	if (pRoot->pNext != nullptr)
	{
		while (lastElem->pNext != nullptr)
		{
			lastElem = lastElem->pNext;
		}
	} 

	List* addElem = new List;
	lastElem->pNext = addElem;
	addElem->pPlateNum = plateNum;
	addElem->entryTime = time(NULL);
	addElem->pNext = nullptr;
	std::cout << "New element of list was added to end of the list!" << std::endl;
}
// Funkcja usuwajaca samochod do listy wjezdzajacy na parking
void removeCar(List* pRoot, char* plateNum)
{
	List* temp = pRoot;
	List* previousTemp = {};
	List* nextTemp = {};

	bool sPlateNum = false; 

	while (nullptr != temp->pNext)
	{
		if (plateNum == temp->pPlateNum) {
			sPlateNum = true;
			nextTemp = temp->pNext;
				break;
		}

		previousTemp = temp;
		temp = temp->pNext;
	}

	if (sPlateNum) {
		if (nullptr == nextTemp) {
			previousTemp->pNext = nullptr;
			delete temp;
			std::cout << "The element has been removed!" << std::endl;
		}

		previousTemp->pNext = temp->pNext;
		delete temp;
		std::cout << "The element has been removed!" << std::endl;

	}
	else {
		std::cout << "Car wasn't found!!" << std::endl;
	}


}

void editCar(List* pRoot, char* plateNum)
{

}
//name of the function
void printAll(List* pRoot) 
{
=======
//missing comment for printALL
void printAll(List* pRoot) {


}

int numberOfElements(List* pRoot) //Function showing number of elements.
{

	if(NULL == pRoot)
	{
		return 0;
	}
		
	List *entry = pRoot;
	int counter;
	for(counter = 0; entry->pNext != NULL; ++counter)
	{
		entry = (entry->pNext);
	}
	
	return counter;
=======
	return 0;
}
