
//pointers is use to store address of avariable

#include <iostream>
using namespace std;

int main(){

string name="md shaquib";

string*ptr=&name;

cout<<"name of varible:";
cout<<name;
cout<<"\n\n";
cout<<"address of name variable:";
cout<<&name;
cout<<"\n\n";
cout<<ptr;

return 0;

}
