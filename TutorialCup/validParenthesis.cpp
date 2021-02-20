#include <bits/stdc++.h>
using namespace std;

bool validParenthesis(string& str) {
    int len = str.length();
    stack<char> stk;
    for(int i=0; i<len; i++) {
        if(str[i]=='(' || str[i]=='{' ||str[i]=='[')
            stk.push(str[i]);
        else if(!stk.empty() && ((str[i]==')' && stk.top()=='(') || (str[i]=='}' && stk.top()=='{') || (str[i]==']' && stk.top()=='['))) {
            stk.pop();
        }
        else if(str[i]==')' || str[i]=='}' || str[i]==']')
            return false;
    }
    return stk.empty();
}

int main() {
    string str;
    cin >> str;
    if(validParenthesis(str))
        cout << "Valid";
    else
        cout << "Invalid";
	return 0;
}
