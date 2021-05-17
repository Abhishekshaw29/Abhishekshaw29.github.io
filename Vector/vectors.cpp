#include<iostream>
using namespace std;

class vector {
     int cs; // current size
     int ms; // maximum size
     int *arr;// address to hold
     public:
     vector(){
         cs = 0;
         ms = 1;
         arr = new int[ms];
     }
     void push_back(int d){
         if(cs == ms){ //array is full 
            int *oldarr = arr;
            arr = new int[2*cs];
            for(int i=0 ;i<cs;i++){
                arr[i]= oldarr[i];
            }
            //clear the memory
            delete [] oldarr;
         }
         arr[cs] = d;
         cs++;

     }
     void pop_back(){
         cs--;
     }
     int front(){
         return arr[0];
     }
     int back(){
         return arr[cs-1];
     }
     int empty(){
         return cs==0;
     }
      int capacity(){
         return ms;
     }
      int at(const int i){
         return arr[i];
     }
    //operator overloading
    void operator[](const int i){
       // return arr[i];
    }
 };

 int main(){
     vector v;
     v.push_back(5);
     v.push_back(4);
     cout<<v.capacity();
 }