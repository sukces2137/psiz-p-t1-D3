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

}

void removeCar(List* pRoot, char* plateNum)
{

}
void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot)
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
}
