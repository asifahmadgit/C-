#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,x,y;
	cout<<"enter a point(a,b) \n";
	cin>>a>>b;
	cout<<"enter a point(c,d) \n";
	cin>>c>>d;
	cout<<"enter a point(x,y) \n";
	cin>>x>>y;
	
	if((b-y)/(a-x)==(d-y)/(c-x))
	cout<<"the points are collinear \n";
	else
	cout<<"the points are not collinear \n";	
	return 0;
}