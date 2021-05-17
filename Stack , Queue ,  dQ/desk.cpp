//sliding window technique
#include<iostream>
#include<deque>
using namespace std;
int main(){
    int ar[100000],n,k,i;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
cin>>k;
   //we have to process first k elements separetely
   deque<int> Q(k);
   for ( i = 0; i < k; i++)
   {
       while (!Q.empty() && ar[i]>ar[Q.back()]){
           Q.pop_back();
       }
       Q.push_back(i);
       
   }
   //process the remaining elements
   for ( ;i < n; i++)
   {
       cout<<ar[Q.front()]<<" ";
       //1. remove the element which are not part of windows
       while ((!Q.empty()) &&  (Q.front()<=i-k))
       {
           Q.pop_front();
       }
       
       //2. remove the element which are not useful and the in window
        while((!Q.empty()) &&  (ar[i]>=Q.back()))
       {
           Q.pop_back(); 
       }
       // 3. add the new elemnents(Expansion)
       Q.push_back(i);
   }
   cout<<ar[Q.front()]; 
   return 0;
}

