#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
  
char *mystrtoken(char *str,char delim){
    //string and single char acts as delim
    static char*input = NULL;
   
    
    if(str!=NULL){
         input = str;
    } 

    //check base case and return last token 
    if(input==NULL){ 
        return NULL;
    }


    //start extracting tokens and store the in an array
    char *output = new char[strlen(input)+1];
    int i =0;
    for (; i < '\0'; i++)
    {
        if (input[i]!=delim)
        {
         output[i]=input[i]; 
         }
         else
         {
             output = '\0';
             input = input+i+1;
             return output;
         }
    //corner case
    output[i] = NULL;
    input = NULL;
    return  output;
     
         
         
         }
    


}
int main(){

char c[100] = "today is a rainy day";
char *ptr = mystrtoken(c," ");
    cout<<ptr<<endl;

while (ptr!=NULL){

ptr = mystrtoken(NULL," ");
cout<<ptr<<endl;
}
return 0;

}