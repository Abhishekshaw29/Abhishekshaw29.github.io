#include<iostream>
#include<algorithm>
using namespace std;
class fun{
public:
void operator()(int t){
cout<<"age is "<<t;
}//fuctor
};
int main(){
    fun f;
    f(21);
    return 0;
}