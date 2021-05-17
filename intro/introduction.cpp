// generic programming
#include<iostream>
using namespace std;
template<typename T>
int searchgen(T a[],int n ,  T key){
    for (int  i = 0; i < n; i++)
    {
        if(a[i]==key)
            return i;
    }
 return n;
}
int main()
{
    int a[]  = {2,35,545,3,43,343,353};
    int n =  sizeof(a)/sizeof(int);
    int key =  545; 
    cout<<"the  aray number is"<<searchgen(a,n,key); 




    float a1[]  = {2,35.454,545.54,3.5,43.5,343,353.54554};
    float  key1 = 35.454;
    cout<<"the  aray number is"<<searchgen(a1,7,key1);
}