// Date Completed: 09/02/2022
// Bubble Sort program using pointers but with syntax from C++ programming language

#include <iostream>
#define MAX 9

// function prototypes
void printValues();
void sort();
void swap(int *, int *);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main() {
  std::cout << "Before: \n";
  printValues();
  sort();
  std::cout << "After: \n";
  printValues();

  return (0);
} // end main

// Creating i as an integer
// Creating a for loop to display the array
void printValues() {

  std::cout << "[";
   
    for (int i = 0; i < MAX; i++)
    {
      std::cout << " " << values[i] << " ";
    }
  std::cout << "]\n";
}

 void sort() {

  int i, j;

  for (i = 0; i < MAX; i++) 
  {
    for (j = 0; j < (MAX - 1); j++) 
    {
      if (values[j] > values[j + 1]) 
      {
        swap(&values[j], &values[j+1]);
        printValues();
      }
    }
  }
}

void swap(int *pointer1, int *pointer2) {

  int temp = *pointer1;
  *pointer1 = *pointer2;
  *pointer2 = temp;
}