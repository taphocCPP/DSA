#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int a[1000000];
ll F[1000001];
signed main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i =0; i < n; i++){
        if(i == 0) F[i] = a[i];
        else F[i] = F[i - 1] + a[i];
    }
    for(int i =0 ; i < n; i++){
        cout << F[i] << " ";    
    }
}