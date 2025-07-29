#include<iostream>
// #include<math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int armstrong = 0;
    for (int num = n; num != 0; num /= 10) {
        int remainder = num % 10;
        armstrong = armstrong + (remainder*remainder*remainder);
    }

    cout << "Armstrong value: " << armstrong << endl;

    if (armstrong == n)
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;

    return 0;
}