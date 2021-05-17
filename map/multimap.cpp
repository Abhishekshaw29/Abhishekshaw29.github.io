#include<iostream>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
int main(){
    //muitimap can have same key for many value
    multimap<char,string> m;
    // b batman
    // a apple
    // b boat
    // a angry
    // c cat
    // d dog
    // e elephant 
    
    //insert
    int n;
    cin>>n;
    for(int i = 0; i<n ;i++){
        char c;
        string s;
        cin>>c;
        cin>>s;
    m.insert(make_pair(c,s));
    }
//erase
auto it  =  m.begin();
m.erase(it);

//erase using lower and uppe bound

    for(auto p:m ){
        cout<<p.first<<" : "<< p.second<<endl;
    }

    auto it2 = m.lower_bound('b'); // batman
    auto it3 = m.upper_bound('d'); // elephant

 for(auto it4 = it2;it4!=it3;it4++){
        cout<<it4->second<<endl;
    }

    auto f = m.find('c');
    if(f->second == "cat"){
        //find and erase
        cout<<f->first<<endl;
        m.erase(f);
    }
    else{
        cout<<"fruit not present";
    }



    return 0;
}

//all work in logn cause of self balancing bst
// array map and index
//  detect cycle of not // address is repeated
//map<node* , bool> if node repeated  then cycle