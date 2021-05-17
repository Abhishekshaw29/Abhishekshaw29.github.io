
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int ar[] = {1,2,3,4,5,6,7,8,9,10,11};
    int n = sizeof(ar)/sizeof(int);
    rotate(ar,ar+10,ar+n);
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;

vector<int>v = {1,2,3};
while (v[0]!=3)
{
next_permutation(v.begin(),v.end());
for(int x:v){
    cout<<x<<" ";
}
cout<<endl;   
}
//swap,reverse,next_permutation
}