#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){    
vector<int> d{1,2,3,10,14};
d.push_back(15);

d.pop_back();
d.insert(d.begin()+3,8); //add element in the middle
d.insert(d.begin()+3,3,100); //add multiple element
d.erase(d.begin()+1);//erase particular element
d.erase(d.begin()+3,d.begin()+5);//erase till range
d.size();
d.clear();//delete all the vector but cap is same
//d.resize(2); //doesnot work


//check empty vector or not 
if(d.empty())
cout<<"this is an empty vector";


for(int x:d){
    cout<<x<<" ";
}
//reserve to avoid doubling and saves time 
d.reserve(1000);
d.push_back(12);
d.push_back(13);
d.push_back(14);
d.push_back(15);
d.push_back(16);

cout<<d.size();
cout<<d.capacity();

return 0;
}

