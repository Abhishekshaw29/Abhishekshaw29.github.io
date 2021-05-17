#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(pair<int,int>p1,pair<int,int>p2){
    int d1,d2;
    d1 = p1.first*p1.first+p1.second*p1.second;
    d2 = p2.first*p2.first+p2.second*p2.second;
    if(d1==d2){
        return p1.first<p2.first;
    }
    else
    {
        return d1<d2;
    }
    
}
int main(){
    vector<pair<int,int>>v;
    int x,y,n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>x>>y;

        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare);

    for(auto x : v){
        cout<<"car"<<x.first<<","<<x.second<<endl;
    }

return 0;
}
