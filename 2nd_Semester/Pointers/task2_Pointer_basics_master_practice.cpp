#include<iostream>
using namespace std;
int main(){
// Declaring two variables
int a = 10;
int b = 20;

// Declaring a pointer and assigning address of a
int* ptr = &a;

// Displaying values
cout << "Value of a:\t" << a << endl;
cout << "Value of b:\t" << b << endl;

// Displaying addresses
cout << "Address of a:\t" << &a << endl;
cout << "Address of b:\t" << &b << endl;

// Showing what pointer holds
cout << "Pointer ptr holds address:\t" << ptr << endl;

// Showing value at that address using dereferencing
cout << "Value at ptr:\t" << *ptr << endl;

// Changing value of a through pointer
*ptr = 30;
cout << "New value of a after changing through pointer:\t" << a << endl;

// Now pointing to b
ptr = &b;
cout << "Pointer ptr now holds address of b:\t" << ptr << endl;
cout << "Value at ptr (now b):\t" << *ptr << endl;

// Changing value of b through pointer
*ptr = 40;
cout << "New value of b after changing through pointer:\t" << b << endl;

// Declaring a NULL pointer
int* nullPtr = nullptr;
cout << "NULL pointer points to:\t" << nullPtr << endl;

// Avoid dereferencing NULL pointer (would crash)
return 0;
}
