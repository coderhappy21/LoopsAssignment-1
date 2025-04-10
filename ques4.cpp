#include<iostream>
using namespace std;
 int main(){

//display gp - 3,12,48......

int n ;
cout<<"enter a number: ";
cin>>n;

int a = 3; //intilize with first term
for(int i = 1; i<= n; i++){
    cout<<a<<" ";
    a*=4;
}




}