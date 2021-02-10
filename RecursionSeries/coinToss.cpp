#include <iostream>
using namespace std;

void coinToss(int n, string str) {
   
    if(n==0) {
        cout << str << "\n";
        return;
    }
    coinToss(n-1, str+"H");
    coinToss(n-1, str+"T");
}
int main() {
    int n;
    cin >> n;
    coinToss(n, "");
	return 0;
}
