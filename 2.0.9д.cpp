#include <iostream>
#define N 5
using namespace std;


void input(unsigned a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int main()
{
    unsigned a[N];
    int  c =0;
    input(a, N);
    for (int i =0; i< N; i++)
        if (a[i]%3==0) c++;

    cout<<c<<endl;

    return 0;
}