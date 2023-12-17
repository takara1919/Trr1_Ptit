#include <bits/stdc++.h>

using namespace std;

int a[1000], n, k;

void NpDp(int i) {
    if(i > n) {
        for(int i = 1; i <= n; i++) cout << a[i] <<" ";

        cout << "\n";

        return;
    }

    for(int j = 0; j <= 1; j++) {
        if(n-i+1 == k && j == 0) continue;
        if(k == 0 && j == 1) continue;

        a[i] = j;
        if(j) k--;
        NpDp(i+1);
        if(j) k++;
    }
}

void lkNpDp() {
    NpDp(1);
}

int main() {
    n = 5, k = 2;
    lkNpDp();

}