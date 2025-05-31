#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int n = 0;
    cout << "Enter number of students: ";
    cin >> n;

    string str;
    double marks;

    // Opening file in append mode so previous data is not erased
    ofstream file("input.txt", ios::app); 

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1; // Exit if file fails to open
    }

    // Header row for file
    file << "Name\tRollNo\tMarks\tGrade" << endl;

    for (int i = 1; i <= n; i++) {
        cout << "Enter student name: ";
        cin >> str;

        cout << "Marks: ";
        cin >> marks;

        file << str << "\t0" << i << "\t" << marks;

        // Grading system based on marks
        if (marks >= 90) {
            file << "\tA";
        } else if (marks >= 80) {
            file << "\tB";
        } else if (marks >= 70) {
            file << "\tC";
        } else if (marks >= 60) {
            file << "\tD";
        } else {
            file << "\tFail"; // For marks below 60
        }

        file << endl; // Move to next line in file
    }

    file.close(); // Always close file after writing
    return 0;
}
