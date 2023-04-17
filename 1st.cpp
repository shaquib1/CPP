

 /*
#include <iostream>     //input output function , it is a library or function
using namespace std;   //std means standerd namespace means title of std


int main()              // it is a main function and its return type is int 
{

    cout<<"Hello shaquib this your first c++ program /n";    // for print anything
    cout<<"now i say im a become a programer ";
    return 0;                                          // it means it return integer but now return 0 means it not return 
}
*/

/*
// a program adding two numbers  using input output streams or functions

  #include <iostream>
  using namespace std;

    int main() {

   int a,b;
    cout<<"Enter the first number:";
   cin>>a;
    cout<<"\n Enter the second number:";
    cin>>b;
    cout<<"\n sum  of a and b is:" cout<<a+b;


    cout<<"The size of (char) is:" <<msize(char)  <<"bytes\n"



    return 0;
    }

*/

/*

        // Nested if else condition

    #include <iostream>
    
    using namespace std;

    int main() {

             int a=20;
             int b=30;
             int c=50;

             if(a>b){
                       if(a>c){

             cout<<"c is the greatest number";
                       }
             }

            else{

             if(b>c){

              cout<<"c is the gratest number";
                }

             else{

              cout<<"c is the greatest number";
               }
       }

    }

*/
    
    /*
      // use conditional operator for if else condition


 #include <iostream>
    
    using namespace std;

    int main() {

             int a=200;
             int b=30;
             int c=50;

             if((a>b) && (a>c)){
                       
             cout<<"A is the greatest number";
                }
             
            else if((b>a) && (b>c)){

                cout<<"b is the gratest number";
               }

             else{

              cout<<"c is the greatest number";
               }   

    }



               // switch statement 


              #include <iostream>
              using namespace std;

              int main()
              {

                 int e=2;

                 switch (e){

                 case 1:
                  cout<<"1 strored in e";
                 break;

                 case 2:
                 cout<<"2 stored in e";
                 break;

                 case 3:
                 cout<<"3 stored in e";
                 break;

                 default:
                 cout<<"all nat match";
                 break;

                 }

              }



// star pyramid 

#include <iostream>
using namespace std;

int main(){

int i,j;

for(i=0;i<5;i++){

   for(j=0;j<=i;j++){
    cout<<"*";

   }

    cout<<"\n";

}

}


// pyramid 


#include <iostream>
using namespace std;

int main(){

int i,j;

for(i=1;i<=5;i++){

   for(j=1;j<=i;j++){
    cout<< i;

   }

    cout<<"\n";

}

}

*/



#include <iostream>
using namespace std;
 
 int main()
{
int number = 1;
while(number<100){
  cout<<"hello shaquib"<<"\n";
  number++;
}

  return 0;
}
