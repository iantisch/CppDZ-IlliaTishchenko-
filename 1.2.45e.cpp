
#include <iostream>
#include <cmath>

using namespace std;
int factorial(int y)
{
    if (y > 1)
        return y * factorial(y - 1);
    else
        return 1;
}
int main()
{
    int k = 0;
    double e, y, x, Sn;
    cin >> x;
    Sn = 0;
    e = 0.0000000000000000000001;
    y = x;
    while (e < y) {
        k++;
        y = (pow(-1,(k-1)) * (pow(x, k)) / (factorial(k)));
        Sn = Sn + y;
    }
    printf("Sn = %.10f",Sn);
    return 1;
}
