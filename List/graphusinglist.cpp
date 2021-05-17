#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    //implment the graph using the list
    //we are given the the points and cost of going there
    //create the graph
    //0-->(3,6)(1,5)(2,10)
    //1-->(0,5)(2,3)
    //2-->(1,3)(3,8)
    //3-->(0,6)(2,8)
    //4-->(3,2)
    list<pair<int,int>> *li;
    int n;
    cin>>n;
    li = new list<pair<int,int>>[n];
    int e;
    cin>>e;
    for (int i = 0; i < e; i++)
    {
        int x,y,wt; 
        cin>>x>>y>>wt;
        li[x].push_back(make_pair(y,wt));
        //bidirectonal
        li[y].push_back(make_pair(x,wt));
    }
    for (int i = 0; i < n; i++)
    { cout<<"linkedlist - "<<i<<"-->";
    for(auto xp:li[i]){
        cout<<"("<<xp.first<<" "<<xp.second<<"),";
    }
    cout<<endl;
    }
    



    return 0;
}