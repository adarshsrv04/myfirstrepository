Move all negative numbers to beginning and positive to end with constant extra space

#include <iostream>
using namespace std;

int main() {
    int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) {
	    cin >> arr[i];
	}
	int j=0;
	for(int i=0; i<n; i++) {
	    if(arr[i]<0 && j<=i) {
	        int temp = arr[i];
	        int k=i;
	        while(j<k) {
	            arr[k] = arr[k-1];
	            k--;
	        }
	        arr[k] = temp;
	        j++;
	    }
	}
	
	for(int i=0; i<n; i++) {
	    cout << arr[i] << " ";
	}
	return 0;
}
