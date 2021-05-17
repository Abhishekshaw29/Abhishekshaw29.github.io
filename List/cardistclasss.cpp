#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
class car{
public:
string car_name;
int x,y;
car(){

}
car(string car,int x,int y){
    car_name=car;
    this->x=x;
    this->y=y;
}
int dist(){
    return (x*x + y*y);
}
};
bool compare(car a,car b){
    int da =a.dist();
    int db= b.dist();
    if(da==db){
        //return car with smaller name
      return a.car_name<b.car_name; //lexiographlly comparsion
    }
    else
    {
        return da<db;
    }
    


}
int main(){
    vector<car>v;
    string n;
    int x,y,num;
    cin>>num;
    for(int i = 0;i<num;i++){
        cin>>n>>x>>y;
          car temp(n,x,y);
          v.push_back(temp);
    }
    sort(v.begin(),v.end(),compare);

    for(auto p : v){

        cout<<"car - "<<p.car_name<<" distance - "<<p.dist()<<" coordinates are -  "<<p.x<<p.y<<endl;
    }


return 0;
}
