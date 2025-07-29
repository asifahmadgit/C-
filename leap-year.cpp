#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    string result = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? "a Leap Year" : "Not a Leap Year";
    cout << year << " is " << result ;
    return 0;
}
