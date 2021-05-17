#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
  
char strtoken(char c[]){
    char *ptr = strtok(c," ");
    cout<<ptr<<endl;

while (ptr!=NULL){

ptr = strtok(NULL," ");
cout<<ptr<<endl;
}
}
int main(){

char c[100] = "today is a rainy day";
strtoken(c);
return 0;

}