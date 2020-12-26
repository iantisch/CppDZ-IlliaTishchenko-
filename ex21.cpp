#include<iostream>
using namespace std;


int main(){

int a[5][5], n, m, i, j;
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
        if (j == m-1){
            cout << endl;
        }
    }

}
bool is_ok = true;
bool there_is_such_element = false;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        int el = a[i][j];
        for(int k=0; k<n; k++){
            if(a[i][k] > el){
                is_ok = false;
                break;
            }
        }
        if (is_ok){
            for(int k=0; k<m; k++){
                if(a[k][j] < el)
                    is_ok = false;
                    break;
            }
        }
        if(is_ok){
            there_is_such_element = true;
            cout << el << endl;};

    }
}
if(!there_is_such_element) cout << 0 << endl;
    

return 0;
}