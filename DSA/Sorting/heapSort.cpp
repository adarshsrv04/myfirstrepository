#include <bits/stdc++.h>
using namespace std;

//Heap sort using max_heap
class Priority_Queue {
    private:
    int top=-1;
    void heapify(int heap[]) {
        int i=++top;
        while(i>0 && heap[i]>heap[(i-1)/2]) {
            swap(heap[i],heap[(i-1)/2]);
            i=(i-1)/2;
        }
    }
    void heapify2(int heap[]) {
        swap(heap[0],heap[top--]);
        int i=0;
        int lc=2*i+1, rc=2*i+2,temp=heap[0];
        while(i<top) {
            if(lc<=top && temp<heap[lc]) {
                if(rc<=top && heap[lc]<heap[rc]) {
                    heap[i]=heap[rc];
                    i=rc;
                }
                else {
                    heap[i]=heap[lc];
                    i=lc;
                }
                lc=2*i+1, rc=2*i+2;
            }
            else break;
        }
        heap[i]=temp;
    }
    public:
    bool isEmpty() {
        return top==-1;
    }
    int size() {
        return top+1;
    }
    int get(int heap[]) {
        try{
            if(isEmpty()) {
                throw -1;
            }
            else return heap[0];
        } catch(int s) {
            cout<<"Priority_Queue empty exception: "<<s<<endl;
        }
    }
    void insert(int heap[], int n) {
        heapify(heap);
    }
    void remove(int heap[]) {
        heapify2(heap);
    }
};

int main() {
    Priority_Queue pq;
    int heap[]={12,15,2,2,2,31};
    for(int i=0;i<6;i++) {
        pq.insert(heap,i);
    }
    for(int a:heap) cout<<a<<" ";
    cout<<endl;
    while(!pq.isEmpty()) {
        pq.remove(heap);
    }
    cout<<endl;
    for(int i:heap) cout<<i<<" ";
	return 0;
}
