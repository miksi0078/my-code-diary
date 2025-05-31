#include <iostream>
using namespace std;

int main() {
    // Declaring variable
    int x = 42;

    // Declaring a pointer and assigning address of x
    int* ptr = &x; // & is address-of operator

    // Displaying value and address
    cout << "Value of x:\t\t\t" << x << "\n";
    cout << "Address of x (&x):\t\t" << &x << "\n";
    cout << "Value of ptr:\t\t\t" << ptr << "\n";
    cout << "Value at address ptr (*ptr):\t" << *ptr << "\n"; // * is dereference operator

    return 0;
}
