#include<iostream>
#include<cmath>
using namespace std;

int main(){

    float x, y;

    const double a2 = 4, b2 = 5, c2 = 3;

    cout << "for x+y>0" << endl;

    y = (a2 + c2)/(a2 - b2);
    x = 1 - (a2 + c2)/(a2 - b2);

    cout << "x=" << x << endl << "y=" << y << endl;

    cout << "for x+y<0" << endl;

    y = (-a2 + c2)/(a2 - b2);
    x = -1 - (-a2 + c2)/(a2 - b2);

    cout << "x=" << x << endl << "y=" << y << endl;
    
    return 0;
}