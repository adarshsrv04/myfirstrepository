#include <bits/stdc++.h>
using namespace std;

//using max_heap
class Priority_Queue {
    private:
    vector<int>heap;
    void heapify() {
        int i=heap.size()-1;
        while(i>0 && heap[i]>heap[(i-1)/2]) {
            swap(heap[i],heap[(i-1)/2]);
            i=(i-1)/2;
        }
    }
    void heapify2() {
        int i=0;
        while(i<heap.size()-1 && (heap[i]<heap[(2*i)+1] || heap[i]<heap[(2*i)+2])) {
            if(heap[(2*i)+1]>heap[(2*i)+2]) {
                swap(heap[i],heap[(2*i)+1]);
                i=(2*i)+1;
            }
            else {
                swap(heap[i],heap[(2*i)+2]);
                i=(2*i)+2;
            }
        }
    }
    public:
    Priority_Queue() {
        
    }
    bool isEmpty() {
        return heap.size()==0;
    }
    int size() {
        return heap.size();
    }
    int get() {
        try{
            if(isEmpty()) {
                throw -1;
            }
            else return heap[0];
        } catch(int s) {
            cout<<"Priority_Queue empty exception: "<<s<<endl;
        }
    }
    void insert(int n) {
        heap.push_back(n);
        heapify();
    }
    void remove() {
        heap[0]=heap[heap.size()-1];
        heap.pop_back();
        heapify2();
    }
    void show() {
        for(int a:heap) cout<<a<<" ";
        cout<<endl;
    }
};


int main() {
    Priority_Queue pq;
    pq.insert(45);
    pq.insert(36);
    pq.insert(54);
    pq.insert(27);
    pq.insert(63);
    pq.insert(72);
    pq.insert(61);
    pq.insert(18);
    pq.insert(100);
    while(!pq.isEmpty()) {
        cout<<pq.get()<<" ";
        pq.remove();
    }
	return 0;
}
