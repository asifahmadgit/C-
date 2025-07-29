#include <iostream>
using namespace std;

int main()
{
    int lower, upper;

    cout << "Enter the lower bound of the range: ";
    cin >> lower;
    cout << "Enter the upper bound of the range: ";
    cin >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are:\n";

    for (int num = lower; num <= upper; num++)
    {
        if (num <= 1)
            continue;

        bool isPrime = true;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " ";
    }

    // cout << endl;
    return 0;
}
