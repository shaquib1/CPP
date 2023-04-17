//function overloading

#include <iostream>
using namespace std;

int add(int x,int y){

   return x+y;
}

double add(double x,double y){

   return x+y;
}

int main(){

cout<<"add int:"<<add(455,5454);


cout<<"\n add double:"<<add(46.78,54.584);

}
