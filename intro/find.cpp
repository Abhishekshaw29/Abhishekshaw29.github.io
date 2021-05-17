#include<iostream>
#include<algorithm>
using namespace std;
int findalgo(int ar[], int n ,int key )
{
    auto it = find(ar,ar+n,key);
    // to find the index subtract with base  address
    int index =  it -  ar;
    cout<<index;
   
}
int bin(int ar[],int n , int key){
    sort(ar,ar+n);
    cout<<binary_search(ar,ar+n,key);
    return 0;
}

int main()
{
   int ar[] = {1,10,11,9,100};
    int n =  sizeof(ar)/sizeof(int);
    int key;
    cin>>key;
    findalgo(ar,n,key);
    bin(ar,n,key);
}
