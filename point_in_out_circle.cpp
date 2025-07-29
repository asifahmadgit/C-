#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, y, r;
    float s;
    cout << "enter a point(x,y) \n";
    cin >> x >> y;
    cout << "enter the radius of the circle \n";
    cin >> r;
    s = sqrt(pow(x, 2) + pow(y, 2));
    if (s > r)
        cout << "the point lies outside the circle";
    else if (s < r)
        cout << "the point lies inside the circle";
    else
        cout << "the point lies in the circumference of the circle";
    return 0;
}