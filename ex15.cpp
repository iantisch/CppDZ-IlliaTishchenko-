#include<iostream>
#include<algorithm>
using namespace std;


int main(){

int a[50][50], n, m, i, j;
cout << "Enter value of n and m:" << endl;
cin >> n >> m;

cout << "Enter elemets of the matrix:" << endl;

for(i = 0; i < n; ++i){
    for(j = 0; j < m; ++j){
        cin >> a[i][j];
    }
}

cout<<"The Matrix is:" << endl;
for(i = 0; i < n; ++i){
    for(j = 0; j < m; ++j){
        cout << a[i][j] << " ";
        }
    cout << endl;
    }

for(int j = 0; j<n; j++){
    for(int i=0; i<n-1; i++){
        if (*max_element(a[i], a[i] + m) > *max_element(a[i+1] , a[i+1] + n)){
            swap(a[i], a[i+1]);
        }
    }
}

cout<<"The Matrix is:" << endl;
for(i = 0; i < n; ++i){
    for(j = 0; j < m; ++j){
        cout << a[i][j] << " ";
        }
    cout << endl;
    }




    return 0;
}