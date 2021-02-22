#include <bits/stdc++.h>
using namespace std;

void codeDecode(string s) {
    string s1 = "abcdefghijklm";
	string s2 = "zyxwvutsrqpon";
    for(int i=0; i<s.length(); i++) {
	    if(s1.find(s[i])!=string::npos) {
	        int found = s1.find(s[i]);
	        cout << s2[found];
	    }
	    else if(s2.find(s[i])!=string::npos) {
	        int found = s2.find(s[i]);
	        cout << s1[found];
	    }
	}
}

int main() {
	string s;
	cin >> s;
	codeDecode(s);
	return 0;
}
