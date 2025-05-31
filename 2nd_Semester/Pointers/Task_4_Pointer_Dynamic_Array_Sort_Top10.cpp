/*
  Task: Pointer-Based Dynamic Array Sorting & Top 10 Extraction
  Commit: Implement dynamic memory handling using pointers with sorting and top-10 logic
  Description:
  This program demonstrates use of pointers in C++ to:
    - Allocate memory dynamically for an integer array
    - Accept input and handle resizing of memory
    - Use bubble sort to sort the array in descending order via pointer manipulation
    - Display the top 10 largest elements from the array
    - Release allocated memory to avoid memory leaks
*/

#include<iostream>
using namespace std;

// Function to print the array values
void print(int* ptr, int s){
	for(int i = 0; i < s; i++){
		cout << ptr[i] << " ";
	}
	cout << endl;
}

// Bubble sort array and return it
int* sort(int* ptr, int s){
	for(int i = 0; i < s - 1; i++){
		for(int j = 0; j < s - i - 1; j++){
			if(ptr[j + 1] > ptr[j]){
				swap(ptr[j], ptr[j + 1]);
			}
		}
	}
	return ptr;
}

// Top 10 function
void top(int* ptr, int s){
	if(s <= 10){
		print(ptr, s);
	} else {
		s = 10;
		for(int i = 0; i < s; i++){
			cout << ptr[i] << " ";
		}
		cout << endl;
	}
}

int main(){
	int c = 5;

	// Dynamically allocating memory for 5 integers initially
	int* num = new int[c];

	int n;

	// Asking user for the actual size of the array they want
	cout << "Enter size of array:\t";
	cin >> n;

	// If the entered size is more than 5, we delete the previous memory and allocate new one
	if(n > c){
		delete[] num; // freeing the previously allocated memory
		num = new int[n]; // allocating new memory with required size
	}

	// Taking user input and storing it in dynamically allocated array
	for(int i = 0; i < n; i++){
		cout << "Enter number you want to put on index:\t" << i << "\n";
		cin >> num[i];
	}

	// Calling function to print the array elements
	print(num, n);

	// Bubble sorting 
	num = sort(num, n);

	// Now printing sorted array
	print(num, n);

	// Top 10 output
	top(num, n);

	// After work is done, deallocating the memory to avoid memory leaks
	delete[] num;

	return 0;
}
