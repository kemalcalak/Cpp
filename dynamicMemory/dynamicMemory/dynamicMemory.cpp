#include "dynamicMemory.h"

int main()
{
	Example exObj, * exPtr;
	exPtr = &exObj;

	exObj.x = 5;
	exObj.y = 3;
	exObj.print();
	/*
	(*exPtr).x = 6;
	(*exPtr).y = 4;
	(*exPtr).print();
	*/


	exPtr->x = 6;
	exPtr->y = 4;
	exPtr->print();


}
