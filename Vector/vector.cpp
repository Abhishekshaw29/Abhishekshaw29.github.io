#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){    
 vector<int> a;
 vector<int> b(5,10); // vector of 5 element having 10 init.
 vector<int>c(b.begin(),b.end());//copy b in c
 vector<int> d{1,2,3,4,14};

for(int i = 0;i<c.size();i++){
    cout<<c[i]<<" ";

}cout<<endl;
for(auto it=b.begin();it!=b.end();it++){
    cout<<(*it)<<" ";

} cout<<endl;
for(int x : d){
    cout<<x<<" ";
}cout<<endl;


vector<int>v;
int size;
cin>>size;
for(int i = 0; i < size; i++)
{
    int num;
    cin>>num;
    v.push_back(num);
}
cout<<v.size()<<endl;
cout<<v.capacity()<<endl; //size of underline array
cout<<v.max_size()<<endl; //max size of array
}
