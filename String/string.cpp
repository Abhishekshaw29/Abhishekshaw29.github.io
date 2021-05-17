#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s0;
    string s1("hello");

    string s2 = "hello world";
    string s3(s2);

    string s4 = s3;

     char a[] = {'a','b','c','\0'};
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;




    s0.append("abhishek shaw"); //add content to string 
    cout<<s0<<endl;

    if(s0.empty()) //check string empty or not
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    
    

    s0+=" is good boy";
    cout<<s0<<endl;

    cout<<s0.length()<<endl;  
    s0.clear(); //clear the string
    cout<<s0.length()<<endl; // finds the length

    //compare two strngs

    s0 = "Apple";
    s1 = " Mango";
    cout<<s0.compare(s1)<<endl; //returns an integers  == 0  equal >0 or <0 lexogrplically

    //overloaded operator
    if (s1>s0)
    {
        cout<<"Mango is lexi greater than apple"<<endl;
    }
    else if (s0>s1)
    {
        cout<<"Mango is lexi greater than apple"<<endl;
    }
    //find substrings
    string s = "I want to have apple juice";
    int idx = s.find("apple");
    cout<<idx<<endl;

    //remove a word from the string

    string word = "apple";
    int len = word.length();
    s.erase(idx,len+1);
    cout<<s<<endl;

//output each character 
    for (int i = 0; i < s2.length(); i++)
    {
        cout<<s2[i]<<":";
    }
    cout<<endl;
    //iterator method
    for (auto it = s2.begin(); it != s2.end(); it++)
    {
        cout<<*it<<":";
    }
    cout<<endl;
    //for each loop
    for(char c:s2)
    {
        cout<<c<<":";
    }

    

 
 return 0; 

}