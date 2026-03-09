/*#include <iostream>
//task_02:Find product of two numbers using recursive addition. 
using namespace std;
int rmultiply(int m, int n) {
    if (n == 0) {
        return 0;
    }
    if (n < 0) {
        return -rmultiply(m, -n);
    }
    if (m < n) {
        return rmultiply(n, m);
    }
    return m + rmultiply(m, n - 1);
}


int main() {
    int num_1, num_2, result;

    cout << "please enteer 2 numbers eg(8,7) to multiply:\t" << endl;
    cin >> num_1 >> num_2;

    result = rmultiply(num_1, num_2);
    cout << "poroduct is \t: " << result << endl;

    return 0;
}

//task_03:Count digits in a number recursively.
#include <iostream>
using namespace std;
int countdigits(int n, int d) {
    if (n == 0) {
        return d;
    }
    else {
        return countdigits(n / 10, d + 1);
    }
}

int main() {
    int num;
    cout << "Enter number please:\t" << endl;
    cin >> num;
    if (num == 0) {
        cout << 1 <<" digit number"<< endl;
        return 0;
    }

    int count = countdigits(num, 0);

    cout << count <<" digits number."<< endl;
    return 0;
}
*/

#include <iostream>
using namespace std;
int sum_of_digits(int n) {
    if (n == 0) {
        return 0;
    }

    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int num;
    cout << "enter a number to find the sum of its digits please\t: ";
    cin >> num;

    if (num < 0) {
        num = -num;
    }
    cout << "sum of digits is \t: " << sum_of_digits(num) << endl;
    return 0;
}