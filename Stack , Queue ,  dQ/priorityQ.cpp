#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    //implemented using heap 
    // heap store in binary tree format
    // based on proirity it takes out elements
    // default is max heap 
    // customise to min heap by adding
    // vector<int>,greater<int>
    // log n time

    priority_queue<int>pqm;
    priority_queue<int,vector<int>,greater<int>> pqn;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin>>no;
        pqn.push(no); // O(logn)
    }


    //remove the elements from the heap
    while (!pqn.empty())
    {
        cout<<pqn.top()<<" ";
        pqn.pop();
    }
    return 0;
}