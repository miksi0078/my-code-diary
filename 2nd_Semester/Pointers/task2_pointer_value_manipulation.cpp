#include<iostream>
using namespace std;
int main(){
// Declaring variables
 int a=42,b=52;
 
 //declaring pointer
 int* ptr=&a;
 
 //real values
 cout<<"acctual value of a is:\t"<<a<<endl;
 cout<<"acctual value of b is:\t"<<b<<endl;
 
 //accessing value of a through pointer
cout<<"value of a through pointer:\t"<<*ptr<<endl;//derefrence operator used

//a value manuploation
*ptr=62;

//after manupolation
cout<<"After manupolation value of a is:\t"<<a<<endl;

//pointing to b
ptr=&b;

//accessing b throuh pointer
cout<<"B accessing throug pointer:\t"<<*ptr<<endl;

return 0;
}
