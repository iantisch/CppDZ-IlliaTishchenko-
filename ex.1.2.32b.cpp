#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout << "n: " << endl;
    cin >> n;
    float Pn = 1;
    for (float i = 1; i <= n; i++){
        Pn *= (i + 1.0) / (i + 2.0);
    }
    cout << "Pn: " << Pn << endl;
    return 0;
}