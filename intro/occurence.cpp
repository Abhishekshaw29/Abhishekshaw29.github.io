#include<iostream>
#include<algorithm>
using namespace std;
int findalgo(int ar[], int n ,int key )
{   //find the key
    bool present = binary_search(ar , ar + n , key);
    if(present) cout<<"Present";
    else{ 
        cout<<"Absent";
    }
    return 0;
}
int findlow(int ar[], int n , int key){
    // lower bound finds     number >= key
   auto it = lower_bound(ar,ar+n,key);
    return it-ar;
}
int findup(int ar[], int n , int key){
    // lower bound finds number< key
    auto it = upper_bound(ar,ar+n,key);
    return it-ar;
}
int main()
{
    int ar[] = {1,20,55,40,4,540,40,41,53,55454,55,55,56,58,100,545,100,100,100,4,100,444,54,10000};
    int n =  sizeof(ar)/sizeof(int);
    sort(ar,ar+n);
    int key;
    cin>>key;
    //findalgo(ar,n,key);
    //findlow(ar,n,key);
    //findup(ar,n,key);
    //count number of occurence but sorting is required to count in logn time
    cout<<(findup(ar,n,key)-findlow(ar,n,key));
    }