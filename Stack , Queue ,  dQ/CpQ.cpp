#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
class person{
public:
string name;
int age;

person(int a ,string n){
    age = a;
    name = n;
}
};

class personcompare{
    public:
bool operator()(person A,person B){
 return A.age < B.age;
}
};


int main(){

int n;

cin>>n;

priority_queue<person,vector<person>,personcompare> pq;


for (int i = 0; i < n; i++)
{
    string name;
    int age;
    cin>>age>>name;
    person p(age,name);
    pq.push(p);

}
for (int i = 0; i < n; i++)
{
    person p = pq.top();
    cout<<p.age<<" "<<p.name<<endl;
    pq.pop();
}


    return 0;
}