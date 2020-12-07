#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int ak_minus_2 = 0, ak_minus_1 = 1;
    int bk_minus_2 = 0, bk_minus_1 = 1;
    int n;
    cin >> n;
    int ak, bk;
    int ans = 0;
    for(int k = 0; k < n; k++){
        bk = bk_minus_1 + ak_minus_1;
        ak = ak_minus_1/k + ak_minus_2 * bk;
        ans += pow(2, k) / (ak + bk);
        bk_minus_1 = bk;
        ak_minus_2 = ak_minus_1;
        ak_minus_1 = ak;
    }
    cout << ans << endl;

}