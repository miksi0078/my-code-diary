#include <iostream>
using namespace std;

int* increase(int* oldArray, int oldSize) {
    int* newArray = new int[oldSize + 1];

    for (int i = 0; i < oldSize; i++) {
        newArray[i] = oldArray[i];
    }

    delete[] oldArray;  // free old memory

    return newArray;
}

int main() {
    int size = 1;
    int* array = new int[1];

    cout << "Enter number: ";
    cin >> array[0];

    int choice;

    while (true) {
        cout << "Wanna continue adding? (1 = yes, 0 = no): ";
        cin >> choice;

        if (choice == 0)
            break;

        array = increase(array, size);
        size++;

        cout << "Enter number: ";
        cin >> array[size - 1];
    }

    cout << "\nFinal Array:\n";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    delete[] array;  // final cleanup
}