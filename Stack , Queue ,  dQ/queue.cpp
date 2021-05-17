#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    queue<int> q;
    //fifo
    for (int i = 0; i < 5; i++)
    {
        q.push(i);
    }
    //loop
    while (!q.empty())
    { 
        cout<< q.front()<<" , ";
        q.pop();
    }
    
    

}