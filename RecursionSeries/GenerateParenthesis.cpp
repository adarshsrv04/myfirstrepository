#include <bits/stdc++.h>
using namespace std;

vector<string> v;   
void validParenthesis(vector<string>& v, int n, int o, int c, string s) {
    if(c>o || o>n) return;
    if(o==n && c==n) {
        v.push_back(s);
        return;
    }
    validParenthesis(v, n, o+1, c, s+"(");
    validParenthesis(v, n, o, c+1, s+")");
}   

int main() {
	int n;
	cin >> n;
	validParenthesis(v, n, 0, 0, "");
	for(string i: v)
	    cout << i << "\n";
	return 0;
}
