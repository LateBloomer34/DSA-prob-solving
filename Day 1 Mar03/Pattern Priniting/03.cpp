#include<iostream>
using namespace std;

void pattern (int n ){ 
for (int i = 0; i < n ; i++){
    for (int j = 0 ; j <=i ; j++){
        cout<<1+j<<" ";
    }
    cout<<endl;
}
}

int main(){
    int n;
    cout<<"enter the value of n :- ";
    cin >>n ;
    pattern (n);
    
}