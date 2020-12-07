#include<iostream>
#include<cmath>
using namespace std;


int main(){
    float x = 1.0;

    float y = 2.0;

    float x0, y0;
    cout << "enter x and y for point: " << endl;
    cin >> x0;
    cin >> y0;

    cout << x0 << " " << y0 << endl;

    float dist = sqrt(pow(x0 - x, 2) + pow(y0 - y, 2));
    cout << "dist: " << dist << endl;
    return 0;
}