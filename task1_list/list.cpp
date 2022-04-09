#include "pch.h"
#include "list.h"

List* initList(void)
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));

	return pRoot;
}

void deinitList(List* pRoot)
{
	free(pRoot);
	pRoot = NULL;
}

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

void removeCar(List* pRoot, char* plateNum)
{

}

void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot)
{
	return 0;
}