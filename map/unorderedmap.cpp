#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    //unorderedmap implemented using bst
    //o(1) time al crud operations
    unordered_map<string,int> m;
    
    //insert
    m.insert(make_pair("mango",100));
    m.insert(make_pair("apple",200));
    m.insert(make_pair("grape",300));

    pair<string,int> p ;
    p.first = "banana";
    p.second = 120;
    m.insert(p);

    m["guava"] = 20;


    // search by key
    string fruit;
    cout<<"enter the fruit to get detail"<<endl;
    cin>>fruit;
    auto it = m.find(fruit);
    if(it!= m.end()){
        //return a iterator
        cout<<"price of "<<fruit<<" is "<<m[fruit]<<endl;
        cout<<"enter the price for the fruit to be updated ";
        int price;
        cin>>price;
        m[fruit] =price;
    }
    else{
        cout<<"fruit not present";
    }
    string fruit2;
    cout<<"enter the fruit to be removed"<<endl;
    cin>>fruit2;
    //another way to find a paricular map
    // it stores unique keys only once 
    if(m.count(fruit2)){
        cout<<"price is "<<m[fruit2]<<endl;
        // return a integer
         //Erase
    cout<<fruit2<<" is removed ";
     m.erase(fruit2);
     cout<<endl;
    }

    //show all map data
    for(auto it = m.begin();it!=m.end();it++){
        cout<<it->first<<" : "<< it->second<<endl;
    }

    for(auto c:m ){
        cout<<c.first<<" : "<< c.second<<endl;
    }
    


    return 0;
}