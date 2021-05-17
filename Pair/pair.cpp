#include<iostream>

#include<algorithm>

using namespace std;
int main(){
    pair<int,char> p1; 
    p1.first = 10;
    p1.second = 'B';

    // another way
    pair<int,char>p2(p1);
    cout<<p2.first<<endl;
    cout<<p2.second;

    //another way
    int a,c;
    char b;
    cin>>a>>c>>b;
    pair<int,char>p3 = make_pair(a,b);
     cout<<p3.first<<endl;
    cout<<p3.second;
    pair<pair<int,int>,string>p4;
    p4.second = "audi";
    p4.first.first =100;
    p4.first.second = 500;

    cout<<p4.first.first<<" "<<p4.first.second<<endl;
    cout<<p4.second;
}
