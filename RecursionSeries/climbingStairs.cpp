#include <iostream>
using namespace std;

void climbingStairs(int cur, int n, string ans) {
    // +ve base case
    if(cur == n) {
        cout << ans << "\n";
        return;
    }
    // -ve base case
    if(cur > n) return;
    
    climbingStairs(cur+1, n, ans+"1");
    climbingStairs(cur+2, n, ans+"2");
    climbingStairs(cur+3, n, ans+"3");
}
int main() {
    int n;
    cin >> n;
    climbingStairs(0, n, "");
	return 0;
}
