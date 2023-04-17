 /*
#include <iostream>

using namespace std;

int main(){

 /*for loop

 for(int i=0;i<100;i++){

      cout<<i <<"";

 }


//while loop

int i=10;

while(i<100){

          cout<<i<<"";
i=i+1;
 
}

return 0;


}
*/

/*

for(int i=1;i<100;i++){
   
      cout<<"hello i m shaquib \n";


}


return 0;

}
*/

/*
// arithmatic operator unary operators

#include <iostream>
using namespace std;

int main() {

int a,b;

cout<<"Enter tha value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;

cout<<++a;
cout<<b++;

return 0;
}
*/

/*
//logical operator
#include <iostream>
using namespace std;

int main() {

bool a =false;
bool b=true;


 cout<<(b&&a);

cout<<(a||b);

cout<<(a&&a);


}

*/

/*
//relational opreator

#include <iostream>
using namespace std;

int main(){

int a=45,b=84;

cout<<(a<b);

cout<<"\n";

cout<<(b<a);
cout<<"\n";

cout<<(a==b);
cout<<"\n";
cout<<(a!=b);

cout<<"\n";
cout<<((b<a)?b:a);

}

*/

/*

// string for this add #include <cstring> library

#include <iostream>
#include <cstring>

using namespace std;

int main(){

char c1[]="Md";
char c2[]="shaquib";

cout<<"concatenation:"<<strcat(c1,c2);

cout<<"\ncopy:"<<strcpy(c1,c2);

cout<<"\nlength:"<<strlen(c2);

return 0;

}

*/

/*
//math library

#include <iostream>
#include <math.h>

using namespace std;

int main(){

int a=5;

cout<<"sin:" <<sin(a);
cout<<"\ncos:" <<cos(a);
cout<<"\ntan:" <<tan(a);
cout<<"\nsquare root:" <<sqrt(a);
cout<<"\npower:" <<pow(5,6);

return 0;
}
*/

/*

#include <iostream>
#include <math.h>

using namespace std;

int main(){
bool machineisworking=true;

cout<<"machine is working:" <<machineisworking<<"\n";

machineisworking=false;

cout<<"machineisworking:"<<machineisworking;


return 0;


}

*/



// Array static initialization

/*
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


*/

//array dynamic initialization 
/*
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



/*

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

*/

/*
//fuctions

#include <iostream>
using namespace std;


int add(int x,int y){

return x+y;
}

int main(){

cout<<add(156,56);

return 0;

}

*/

/*
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

*/

/*
//oops class and object

#include <iostream>
using namespace std;

class Car{

    public:

     string name="bmw";

     int number=54896;

void get_details(){

cout<<"name:"<<name;
cout<<"\nnumber:"<<number;

}

};

int main(){

   Car o1;

  o1.get_details();

}
*/
/*
//at dynamic time means takes input from user

#include <iostream>
using namespace std;

class Car{

    public:

     string name;

     int number;


    void put_details(int i,string n){

      number=i;
      name=n;


}

void get_details(){

cout<<"name:"<<name;
cout<<"\nnumber:"<<number;

}

};

int main(){

   Car o1;
   
   int p_number;
   string p_name;
  
  cout<<"enter the name of the car:";
  cin>>p_name;

  cout<<"enter the number of the car:";
  cin>>p_number;

  o1.put_details( p_number, p_name);
  
  o1.get_details();

}

*/

/*
 //constructor special type of function

 #include <iostream>
 using namespace std;

 class Cpp{

   public:

   int a;
   int b;

   Cpp(int x, int y)   //constructor
   {
      a=x;
      b=y;

   }

void print(){
 
cout<<"a:"<<a;
cout<<"\nb:"<<b;


}

 };

 int main(){

   Cpp o1(666,654);
 
   o1.print();

   return 0;

 }

 
#include <iostream>
using namespace std;

int main(){

   cout<<"size of integer in bytes:"<<sizeof(int)<<"bytes\n";
}


#include <iostream>
using namespace std;


int main(){

for( int i=0;i<100;i++){

   cout<<"this print 100 times \n";
}


   return 0;
}
*/

/*
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

  int A[5]={564,54,65,89,98};
  
  int i;
 for( int i=0;i<5;i++){    

cout<<A[i];
 } 

// for each loop

for(int x:A){
cout<<x;
}
// from user
 int n;
 cout<<"Enter the size:"
 cin>>n;
int B[n];

}
*/

