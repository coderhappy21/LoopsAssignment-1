#include<iostream>
using namespace std;
 int main(){

//print all num divisible by 3

for(int i = 1; i<=100; i++){
    if(i%3 ==0)
    cout<<i<<" ";
}

cout<<endl;
cout<<endl;

//second method for less loops iterations
for(int i = 3; i<=100; i+=3){
    cout<<i<<" ";
}





}