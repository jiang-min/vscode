/*************************************************************************
	> File Name: heapify.cpp
	> Author: Maoting Ren
	> Mail: mren@g.clemson.edu
	> Created Time: Sat 26 Nov 2016 05:48:12 PM EST
 ************************************************************************/
 
#include<iostream>
#include<vector>
using namespace std;

void adjustHeap(vector<int> &myheap, int k){
    int len = myheap.size();
    while(k <= len/2-1){
        if(myheap[k]<myheap[2*k+1] && ((2*(k+1)>=len)||myheap[k]>myheap[2*(k+1)]))
            break;
        if(myheap[k] > myheap[2*k+1] && (myheap[2*k+1] >= myheap[2*(k+1)])){
            swap(myheap[k], myheap[2*k+1]);
            k = 2*k+1; 
        }
        else{
            swap(myheap[k], myheap[2*(k+1)]);
            k = 2*(k+1);
        }
    }
}
 
void buildHeap(vector<int> &myheap)
{
    if(myheap.size() <= 1) return;
    for(int i = myheap.size()/2-1; i >= 0; i--)
        adjustHeap(myheap, i);
}
 
int main()
{
    vector<int> myheap{4, 1, 3, 4, 5, 7, 2, 6, 8, 0};
    buildHeap(myheap);
    for(int i = 0; i < (int)myheap.size(); i++)
        cout << myheap[i] << endl;
}