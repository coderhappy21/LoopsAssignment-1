#include<iostream>
using namespace std;
 int main(){

//display ap - 4,7,10,13,16......

int n ;
cout<<"enter a number: ";
cin>>n;

int a = 4; //intilize with first term
for(int i = 1; i<= n; i++){
    cout<<a<<" ";
    a+=3;
}




}