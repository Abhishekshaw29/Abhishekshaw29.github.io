#include<iostream>

#include<algorithm>

using namespace std;
int compare(int a,int b){
    
        return a>b; //desc
    
}
int main(){

    int ar[] = {1,20,55,40,4,540,40,41,53,55454,55,55,56,58,100,545,100,100,100,4,100,444,54,10000};
    int n =  sizeof(ar)/sizeof(int);
    
    sort(ar,ar+n);
     for (int i = 0; i < n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    sort(ar,ar+n,compare);
    for (int i = 0; i < n;i++)
    {
        cout<<ar[i]<<" ";
    }
}