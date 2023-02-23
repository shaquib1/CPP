// In this we search in array  element present  or not in linearly so it is called Linear search.


#include <iostream>
using namespace std; 

bool search(int arr[], int size, int key)
{

    for(int i=0; i<size; i++){

   if (arr[i]==key){
    return 1;
   }

    }
    return 0;
    
}


int main(){

int arr[100];
int size;
cin>>size;
int key;
for(int i=0; i<size; i++){
    cin>>arr[i]<<" ";
}

bool value= search(arr, size, key);

if(value){
    cout<<"key is present in array"<<"\n";
}
else {cout<<"key is not present in array"<<"\n";

}


}