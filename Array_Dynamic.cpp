//array dynamic initialization 

#include <iostream>

using namespace std;

int main() {

   int a[10];

   cout<<"enter the value of the array:";

   for(int i=0;i<10;i++)
   {

    cin>>a[i];

   }

   
   
   cout<<"number entered by you: \n";

for(int i=0;i<10;i++){


      cout<<a[i]<<" ";
}

return 0;

}