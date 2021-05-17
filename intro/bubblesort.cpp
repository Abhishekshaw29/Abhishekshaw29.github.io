#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
    
        return a<b; //desc
    
}
int swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    return 0;
}
int bubblesort(int ar[],int n ,bool (&cmp)(int a,int b)){
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n-i-1; j++)
    {
        if(cmp(ar[j],ar[j+1]))
        {
            swap(ar[j],ar[j+1]); //fuction swap will swap
        }
    }
    
}
for (int i = 0; i < n; i++)
{
    cout<<ar[i]<<" ";
}
return 0;
}
int main(){

    int ar[] = {1,20,55,40,4,540,40,41,53,55454,55,55,56,58,100,545,100,100,100,4,100,444,54,10000};
    int n =  sizeof(ar)/sizeof(int);
    bubblesort(ar,n,compare);
}