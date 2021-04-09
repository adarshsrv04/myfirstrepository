#include <bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int r) {
    int pivot=a[r], pindex=l;
    for(int i=l;i<r;i++) {
        if(a[i]<=pivot) {
            swap(a[i], a[pindex]);
            pindex++;
        }
    }
    swap(a[pindex],a[r]);
    return pindex;
}

void quickSort(int a[],int l,int r) {
    if(l>=r) return;
    int pivpos=partition(a,l,r);
    quickSort(a,l,pivpos-1);
    quickSort(a,pivpos+1,r);
}

int main() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    quickSort(a,0,6);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}
