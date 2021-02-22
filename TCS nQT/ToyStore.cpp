#include <bits/stdc++.h>
using namespace std;

void toyStore(string s) {
    vector<string> softToys = {"GIANT-TEDDY-BEAR", "GIRAFFE", "CAT", "MEGA-BEAR", "DOG", "LION",
         "BILLY-BEAR", "BESTY-BEAR", "MONKEY", "BOBBY-BEAR", "BUNNY-BEAR", "BENJAMIN-BEAR",
         "KUNG-FU-PANDA", "BROWN-BEAR", "PINK-BEAR", "BABY-ELEPHANT", "BLUE-FISH", "HIPPO",
         "CUTE-PIG", "PIKACHU", "DOREMON", "TORTOISE", "CATER-PILLAR", "CANDY-DOLL"};
         
    bool flag = false;
    for(int i=0; i<softToys.size(); i++) {
        if(find(softToys.begin(), softToys.end(), s) != softToys.end()) {
            softToys.erase(remove(softToys.begin(), softToys.end(), s), softToys.end());
            flag = true;
            break;
        }
    }
    if(!flag) {
        cout << "ITEM NOT FOUND\n";
    }
    
    for(int i=0; i<softToys.size(); i++) {
        cout << i+1 << "." << softToys[i] << " ";
    }
}

int main() {
    
	string s;
	cin >> s;
	toyStore(s);
	return 0;
}
