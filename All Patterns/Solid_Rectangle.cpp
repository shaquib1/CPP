#include <iostream>
using namespace std;

int main(){
    int l,w;
    cout<<"Enter the lenght of rectangle : ";
    cin>>l;
    cout<<"Enter the width : ";
    cin>>w;

for(int i=0; i<=l; i++){
    for(int j=0; j<=w; j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}

return 0;
}
