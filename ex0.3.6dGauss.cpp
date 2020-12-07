#include<iostream>
#include<cmath>

using namespace std;

double gauss(double x){
    return exp(-pow(x, 2));
}

double gauss_derivative(double x){
     const double h = 0.0001;
     cout << gauss(x) << endl;
     return ((gauss(x + h) - gauss(x)) / h);
}

int main(){
    double x;
    cout << "Enter x: "; 
    cin >> x;
    cout << gauss_derivative(x) << endl;

    return 0;
}