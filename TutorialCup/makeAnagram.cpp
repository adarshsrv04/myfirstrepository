#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t; //testcases
	while(t--) { //code from here
		int count=0;
		string s1, s2;
		cin >> s1 >> s2;
		int s1chars[26] = {0};
		int s2chars[26] = {0};
		for(int i=0; i<s1.length(); i++) {
			s1chars[s1[i]-'a']++;
		}
		for(int i=0; i<s2.length(); i++) {
			s2chars[s2[i]-'a']++;
		}
		for(int i=0; i<26; i++) {
			if(!s1chars[i] && s2chars[i]) {
				count += s2chars[i];
			}
			else if(s1chars[i] && !s2chars[i]) {
				count += s1chars[i];
			}
			else {
				if(s1chars[i]>s2chars[i]) {
					count += s1chars[i]-s2chars[i];
				}
				else {
					count += s2chars[i]-s1chars[i];
				}
			}
		}
		cout << count << "\n";
	}
}
