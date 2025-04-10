#include<iostream>
using namespace std;
 int main(){

//sum from 1 to n all natural numbers

int n ;
cout<<"enter a number: ";
cin>>n;

int sum = 0; 
for(int i = 1; i<= n; i++){
    sum+=i;
}

cout<<"Sum from 1 to "<<n<<" is: "<<sum;



}