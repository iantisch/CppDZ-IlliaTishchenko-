#include<iostream>
#include<cmath>
using namespace std;

void print_array(int *a, int n){
    for(int i=0; i<n; i++)
        cout << a[i] << ' ';
    cout << endl;
}


int* input_until_zero(int* n){
    int m;
    int* arr = new int[0];
    cout << "input until zero" << endl;
    while(true){
        cin >> m;
        if(m == 0) break;
        arr = (int*) realloc(arr, (*n + 1) * sizeof(arr[0]));
        arr[(*n)++] = m;
    }
    return arr;
}

int big(int *arr, int n){
    int min = INT_MIN;
    for(int i = 0; i < n; i++){
        if (arr[i] < 0){
            if (arr[i] > min){
                min = arr[i];
            }
        }
    }
 
    if(min == INT_MIN){
        min = arr[0];
        for(int i = 0; i<n; i++){
            if(arr[i] < min) min = arr[i];
        }
    }
    return min;
}


int main(){
    int n = 0;
    int *arr = input_until_zero(&n);
    print_array(arr, n);
    cout << big(arr, n) << endl;
}