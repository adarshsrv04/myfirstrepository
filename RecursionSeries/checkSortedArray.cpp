#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int a[], int i, int n) {
    if(i>=n-1) {
        return true;
    }
    bool check = checkSorted(a, i+1, n);
    if(a[i]>a[i+1]) {
        return false;
    }
    return check;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    if(checkSorted(a, 0, n)) {
        cout << "Sorted";
    }
    else {
        cout << "Not Sorted";
    }
    return 0;
}
