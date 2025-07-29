#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"enter a number";
    cin>>n;
    int reverse = 0 ;
    int sum =0;
    while (n!=0){
        int remainder = n%10;
        reverse = reverse*10 + remainder;
        sum = sum + remainder;
        n/=10;
    }
    cout<<"the reverse of the number "<<"is "<<reverse<<endl;
    cout<<"the sum of its digits is "<<sum;
    return 0;

}