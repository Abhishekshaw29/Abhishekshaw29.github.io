#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    stack<int> s;
    //lifo
    for (int i = 0; i < 5; i++)
    {
        s.push(i);
    }
    //loop
    while (!s.empty())
    {
     cout<<s.top()<<" , ";
     s.pop(); 
    }
    
    

}