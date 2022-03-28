#include "pch.h"
#include "list.h"



List* initList(void)
{
	List* DamianJaworski = (List*)malloc(sizeof(*DamianJaworski));
	
	return DamianJaworski;
}

void deinitList(List* DamianJaworski)
{
	free(DamianJaworski);
	DamianJaworski = NULL;
}

void addCar(List* DamianJaworski, char* plateNum)
{

}

void removeCar(List* DamianJaworski, char* plateNum)
{

}
void printAll(List* DamianJaworski) {

}

int numberOfElements(List* DamianJaworski)
{
	return 0;
}
