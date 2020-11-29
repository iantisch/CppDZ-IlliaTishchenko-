#include<iostream>
#include<cmath>
using namespace std;

float mypow(float number, int k){
    float answer = 1;
    for(int i = 0; i < k; i++){
        answer *= number;
    }
    return answer;

}

int main(){
    float xk;
    float x;
    cout << "x: " << endl;
    cin >> x;
    for (int k = 1; k <= 10; k++){
        xk = (mypow(-1, k) * mypow(x, k)) / k;
        cout << "xk: " << xk << endl;
    }
    return 0;
}