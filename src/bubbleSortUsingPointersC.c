// Date Completed: 09/02/2022
//famous bubble sort in C programming language
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

// function prototypes
void printValues();
void sort();
void swap(int *, int *);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main() {
	printf("Before: \n");
	printValues();
	sort();
	printf("After: \n");
	printValues();

	return(0);
} // end main

//Creating i as an integer
//Creating a for loop to display the array
void printValues() {

	printf("[");
		for (int i = 0; i < MAX; i++)
		{
			printf(" %d ", values[i]);
		}
	printf("]\n");

} //end printValues

//Creating a bubble sort function 
//The original array is repeated to start a for loop
void sort() {

	int i, j;
	
	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < (MAX - 1); j++)
		{
			if (values[j] > values[j + 1])
			{
				swap(&values[j], &values[j+1]); //Swap implemented with the addresses that the pointers target
				printValues(); //This function prints the array after each swap
			}
		}
	}
} //end sort

//Swap function is created to initiate the sorting of the array with pointers
void swap(int *pointer1, int *pointer2) {

	int temp = *pointer1; //The value of pointer1 is given to temp
	*pointer1 = *pointer2; // pointer1 gets the value of pointer2
	*pointer2 = temp; //pointer2 gets the value of temp

} //end swap