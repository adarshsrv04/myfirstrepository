#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;

int ncr(int n, int r)   //ncr from stackoverflow
{
    r=min(r,n-r);
    int A[r],i,j,B[r];
    iota(A,A+r,n-r+1);  
    iota(B,B+r,1);

    int g;
    for(i=0;i<r;i++)
    for(j=0;j<r;j++)
    {
        if(B[i]==1)
            break;
        g=__gcd(B[i], A[j] );
        A[j]/=g;
        B[i]/=g;
    }
    long long ans=1;
    for(i=0;i<r;i++)
        ans=(ans*A[i])%mod;
    return ans;
}

int main() {
    int n, r;
    cin >> n >> r;
    cout << ncr(n, r);
    return 0;
}
