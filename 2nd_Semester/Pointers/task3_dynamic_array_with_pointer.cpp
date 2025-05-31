#include<iostream>
using namespace std;

// Function to print the array values
void print(int* ptr, int s){
	for(int i=0; i < s; i++){
		cout << ptr[i] << " ";
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

	// After work is done, deallocating the memory to avoid memory leaks
	delete[] num;

	return 0;
}
