#include<iostream>
#include<cmath>
using namespace std;


int main(){
    float x0 = 1.0;
    float y0 = 2.0;
    float a = 3.0;
    float b = 4.0;
    float c = 7.0;

    float x, y;
    cout << "enter x and y for line: " << endl;
    cin >> x;
    cin >> y;

    float dist = (abs(a * x + b * y + c)/ sqrt(pow(a, 2) + pow(b, 2)));
    cout << "dist: " << dist << endl;
    return 0;
}
