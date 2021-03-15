#include <bits/stdc++.h>
using namespace std;

/*
pattern for n=5;
    1
   121
  12321
 1234321
123454321
 1234321
  12321
   121
    1
*/

int main() {
    
    int n;
    cin >> n;
    int i=1;
    while(i<=n) {
        int j=i; 
        while(j<n) {
            cout << " ";
            j++;
        }
        j=1;
        while(j<=i) {
            cout << j++;
        }
        j=i;
        while(j>1) {
            cout << --j;
        }
        cout << "\n";
        i++;
    }
    i=1;
    while(i<n) {
        int j=1; 
        while(j<=i) {
            cout << " ";
            j++;
        }
        j=1;
        while(j<=n-i) {
            cout << j++;
        }
        j=n-i-1;
        while(j>=1) {
            cout << j--;
        }
        cout << "\n";
        i++;
    }
	return 0;
}
