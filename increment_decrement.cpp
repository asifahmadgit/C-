#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number ";
    cin>>a;
    cout<<"before increment :" << a<<"\n"; 

    cout<< "after increment : "<< ++a<<"\n";

    cout<<"before decrement : " << a << "\n";
    
    cout<<"after decrement : "<< --a<<"\n";
    return 0;
}