#include<iostream>
using namespace std;
 int main(){

//print all num from n to 1

int n ;
cout<<"enter a number: ";
cin>>n;

for(int i = n; i>=1; i--){
    cout<<i<<endl;
}

cout<<endl;
cout<<endl;

//second method using extra variable
int a = n;
for(int i = 1; i<=n; i++){
    cout<<a<<endl;
    a--;
}





}