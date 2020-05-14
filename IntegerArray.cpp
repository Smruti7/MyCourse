#include<iostream>
#include "IntegerArray.h"


int main1()
{
	int Choice;
	IntegerArray a;
	do
	{
		printf("1. Add Element:\n 2.Delete Element: \n 3. Delete Value at Index: \n 4. Print Array:\n 5.Exit \n ");
		printf("Enter your choice:");
		scanf_s("%d", &Choice);

		switch (Choice)
		{
		case 1:
		{
			int x;
			printf("Enter a number to Add:");
			scanf_s("%d", &x);
			a.AddElement(x);
			a.Print();
			break;
		}
		case 2:
		{
			int x;
			printf("Enter a number to delete:");
			scanf_s("%d", &x);
			a.deleteElement(x);
			a.Print();
			break;
		}

		case 3:
		{
			int x;
			printf("Enter a index to delete the value:");
			scanf_s("%d", &x);
			a.deleteElementAtIndex(x);
			a.Print();
			break;
		}
		case 4:
			a.Print();
			break;
		case 5:
			return 0;
		}
	} while (true);
}