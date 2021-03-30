#include <bits/stdc++.h>
using namespace std;

//sieve of eratosthenes
void seive(int n) {
    bool a[n+1];
    a[0]=a[1]=false;
    for(int i=2; i<=n; i++) a[i]=true;
    for(int i=2; i*i<=n; i++) {
        for(int j=i*i; j<=n; j+=i) {
            if(j%i==0) a[j]=false;
        }
    }
    for(int i=0; i<=n; i++) cout<<a[i]<<" ";
}

int main() {
    int n; cin>>n;
    seive(n);
	return 0;
}
