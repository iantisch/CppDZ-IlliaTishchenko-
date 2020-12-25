#include <iostream>
#include<cstring>
#include<cmath>

using namespace std;

void bin(unsigned n){
    for(int i = 31; i >= 0; i--){
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

void change_i_j(unsigned* n, unsigned i, unsigned j){
    int in_bin[31];
    for(int k = 31, l = 0 ; k >= 0; k--, l++){
        in_bin[l] = (((*n) >> k) & 1);
    }
    swap(in_bin[i], in_bin[j]);
    *n = 0;
    for(int k = 31, l=0; k>=0; k--, l++){
        *n += pow(in_bin[k] * 2, l);
    }

}

int main(){
    unsigned n;
    cout << "enter number: ";
    cin >> n;
    bin(n);
    cout << "enter i and j: ";
    unsigned i, j;
    cin >> i >> j;
    change_i_j(&n, i, j);
    bin(n);
    cout << n << endl;
    cout << hex << n << endl;


    return 0;
}