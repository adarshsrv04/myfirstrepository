#include <iostream>
using namespace std;

int bitCount(int n) {
    int count=0;
    while(n) {
        if(n&1) {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int bitCountFast(int n) {
    int count=0;
    while(n) {
        count++;
        n = n&(n-1);
    }
    return count;
}

int main() {
    int n, count=0;
    cin >> n;
    cout << bitCount(n) << "\n" << bitCountFast(n);
    return 0;
}
