#include <iostream>
using namespace std;

int* decrease(int* oldArray, int oldSize) {
    int* newArray = new int[oldSize -1];

    for (int i = 0; i < oldSize-1; i++) {
        newArray[i] = oldArray[i];
    }

    delete[] oldArray;  // freing memory

    return newArray;
}

int main() {
    int size = 5;
    int* array = new int[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter number: ";
        cin >> array[i];
    }
   

    int choice;

    while (true) {
        cout << "Wanna continue removing? (1 = yes, 0 = no): ";
        cin >> choice;

        if (choice == 0)
            break;

        array = decrease(array, size);
        size--;
    }

    cout << "\nFinal Array:\n";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    delete[] array;  // final cleaning
}