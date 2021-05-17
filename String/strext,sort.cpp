#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
string extracttoken( string str , int key){
    
    // (char*)str.c_str() --> convert string into char and put it in array
    char *s =  strtok( (char*)str.c_str()," ");
    while (key>1){
        s = strtok(NULL," ");
        key--;
        }
   return (string)s; //type cast to string
}



int converttoint(string x){
   return stoi(x);
}


bool num_cmp(pair<string,string> s1,pair<string,string> s2){
    string key1,key2;
    key1 = s1.second;
    key2 = s2.second;
    return converttoint(key1)<converttoint(key2);

}


bool lex_cmp(pair<string,string> s1, pair<string,string> s2){
    string key1,key2;
    key1 = s1.second;
    key2 = s2.second;
    return key1<key2;
}


int main(int argc, char const *argv[]){

		int n;
        string a[100];
        cout<<"enter the number of string :";
		cin>>n;
        cin.get();
        for (int i = 0; i < n; i++)
        {
            getline(cin,a[i]);
        }
        int key;
        cout<<"enter key to compare : ";
        cin>>key;
        string rev;
        string ordering;
        cout<<"enter the reverse or not as true or false : ";
        cin>>rev;
        cout<<"enter the ordering : ";
        cin>>ordering;

        //keeping key and string in pair
        pair<string,string>strpair[100];
        for (int  i = 0; i < n; i++)
        {
            strpair[i].first = a[i];
            strpair[i].second = extracttoken(a[i],key);
        }

        //sorting

        if(ordering == "numeric"){
            sort(strpair,strpair+n,num_cmp);
        }
        else if(ordering == "not")
        {
            sort(strpair,strpair+n,lex_cmp);
        }
	return 0;

    //reversal
    if(rev == "true" ){
        for (int i = 0; i < n/2; i++)
        {
            swap(strpair[i],strpair[n-i-1]);
        }
    }
    for (int  i = 0; i < n; i++)
    {
        cout<<strpair[i].first<<endl;
    }
    
}