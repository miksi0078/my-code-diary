#include<iostream>
using namespace std;
//addition..
int add(int* a,int* b){
	int sum =*a+*b;
	return sum;
}
//suntraction
int sub(int* a,int* b){
	int sub =*a-*b;
	return sub;
}
//multiplicatio
int pro(int* a,int* b){
	int pro =(*a)*(*b);
	return pro;
}
//devision
double dev(int* a,int* b){
	double dev;
	if(*b!=0){
	dev =(*a)/(*b);
	}else{
		cout<<"Cant be divide by zero! ";
		return 0;
	}
	return dev;
}
//reminader
int rem(int* a,int* b){
	if(*b==0){
		cout<<"cant be devide by zero! ";
		return 0;
	}
	int rem =(*a)%(*b);
	return rem;
}
int main(){
	int x,y;
	cout<<"Enter two integers..:\t";
	cin>>x>>y;
    cout<<"sum is:\t"<<add(&x,&y)<<endl;
    cout<<"sub is:\t"<<sub(&x,&y)<<endl;
    cout<<"pro is:\t"<<pro(&x,&y)<<endl;
    cout<<"dev is:\t"<<dev(&x,&y)<<endl;
    cout<<"rem is:\t"<<rem(&x,&y)<<endl;
    
return 0;
}
