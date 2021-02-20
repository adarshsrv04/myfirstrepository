//Valid Anagram

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.length() != s2.length()) {
        cout << "false"; return 0;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 == s2) {
        cout << "true"; return 0;
    }
    else {
        cout << "false"; return 0;
    }
    return 0;
}
