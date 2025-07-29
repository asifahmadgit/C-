#include <iostream>
using namespace std;

int main()
{
    int n, prime = 1;
    cout<<"enter a number";
    cin>>n;
    if (n <= 1)
        prime = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime)
        cout<<"prime number is : "<< n;
    else
        cout<<"composite number "<< n;
    return 0;
}
