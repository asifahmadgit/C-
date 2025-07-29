#include<iostream>
using namespace std;
int main (){
    int a , b ,c;
    cout<<"Enter 3 different numbers :";
    cin>>a>>b>>c;
    // if(a>b && a>c)
    //     cout<<"a is the greatest!";
    // else if (b>c)
    //     cout<<"b is the greatest!";
    // else
    //     cout<<"c is the greatest!";

    int greatest=a>b?(a>c?a:c):(b>c?b:c);
    cout<<greatest;

    return 0;
}