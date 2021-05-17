#include<iostream>
#include<algorithm>
using namespace std;
int compare(int a,int b){
    return a<=b; //changeing the order of lower bound generally it is >=
} 
int domination(int coins[],int n , int money){
   int m;
    while (money!=0)
    {
        int lb = lower_bound(coins,coins+n,money,compare) - coins-1;
    // cout<<lb<<" value "<<coins[lb];
    m = coins[lb];
    money = money-m;
    cout<<"the coins are : "<<coins[lb]<<endl;
    }
    
     return 0;

}
int main(){
    int coins[] = {1,2,5,10,20,50,100,200,500,1000,2000};
    int n = sizeof(coins)/sizeof(int);
    int money;
    cin>>money;
    domination(coins,n,money); 

    return 0;
}