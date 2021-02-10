#include <iostream>
using namespace std;

void permutation(string ques, string ans) {
    if(ques.length()==0) {
        cout << ans << "\n";
        return;
    }
    for(int i=0; i<ques.length(); i++) {
        permutation(ques.substr(0, i) + ques.substr(i+1), ans+ques[i]);
    }
}

int main() {
    string str;
    cin >> str;
    permutation(str, "");
	return 0;
}
