#include <bits/stdc++.h>
using namespace std;

void reverseString(string str) {
    int j=0;
    string s = "";
    for(int i=str.length()-1; i>=0; i--) {
        if(str[i] == ' ') {
            s += str.substr(i+1, j) + " ";
            j=0; continue;
        }
        j++;
    }
    s += str.substr(0, j+1);
    cout << s;
}

int main() {
    string str;
    getline(cin, str);
    reverseString(str);
	return 0;
}
