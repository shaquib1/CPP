#include <iostream>

using namespace std;

int main(){

 int a[10]={5,48,88,88,788,777,8878,88,788,477};
 int b[4];
 b[0]=45;  //to store value in an array
 b[2]=45;
 b[1]=57;
 cout<<b[2]<<"\n";
 cout<<a[2]<<"\n";
 printf("%d\n",a[4]);

      for(int i=0;i<10;i++){

         cout<<a[i]<<" ";

      }

         return 0;
}