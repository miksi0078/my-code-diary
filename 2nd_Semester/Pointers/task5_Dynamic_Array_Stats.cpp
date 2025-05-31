
/*Let user input n integers in an array (using dynamic memory). Write functions that take pointer and size to calculate:

Sum

Average

Max

Min
Return and print all using pointer traversal (no indexing like arr[i], only *(ptr + i)).

*/

#include<iostream>
using namespace std;

//copy
void copy(int* arr,int* pt,int s){
	for(int i=0;i<s;i++){
		*(pt+i)=*(arr+i);
	}
}

//autogrow
int* grow(int* arr,int s,int n){
	int* inew=new int[s + 1];
	copy(arr,inew,s);
	*(inew+s)=n;
	delete[] arr;
	return inew;
}

//display
void display(int* ptr,int s){
	for(int i=0;i<s;i++){
		cout<<*(ptr+i)<<",";
	}
	cout<<endl;
}

//sum
int sum(int*ptr,int s){
	int sum=0;
	for(int i=0;i<s;i++){
		sum=sum+*(ptr+i);
	}
	return sum;
}

//average
double avg(int* ptr,int n){
	int su=sum(ptr,n);
	double avg=(double)su/n;
	return avg;
}

//max
int max(int* ptr,int s){
	int ma=*(ptr+0);
	for(int i=0;i<s;i++){
		if(*(ptr+i)>ma){
			ma=*(ptr+i);
		}
	}
	return ma;
}

//min
int min(int* ptr,int s){
	int ma=*(ptr+0);
	for(int i=0;i<s;i++){
		if(*(ptr+i)<ma){
			ma=*(ptr+i);
		}
	}
	return ma;
}

//boble sorting in accesinding
int* sort(int* ptr,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(*(ptr+j)>*(ptr+j+1)){
				swap(*(ptr+j),*(ptr+j+1));
			}
		}
	}
	return ptr;
}

//boble sorting in dccesinding
int* dsort(int* ptr,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(*(ptr+j)<*(ptr+j+1)){
				swap(*(ptr+j),*(ptr+j+1));
			}
		}
	}
	return ptr;
}

//top function
void top(int* ptr,int t,int n){
	if(t<=n){
		display(ptr,t);
	}else{
		display(ptr,n);
	}
}

//top function
void les(int* ptr,int t,int n){
	if(t<=n){
		display(ptr,t);
	}else{
		display(ptr,n);
	}
}
int main(){
	int n;
	int choice;
	cout<<"Enter size of array:\n";
	cin>>n;
	int* ptr=new int[n];
	for(int i=0;i<n;i++){
		cout<<"Enter value by index:\t"<<i<<":\t";
		cin>>*(ptr+i);
		cout<<endl;
	}
	
	//autogrowing array
	int num;
	bool flag=true;
	while(flag){
	cout<<"Enter Do You want To continue adding:\t1(Yes)/else(NO):\n";
	cin>>choice;
	if(choice==1){
		cout<<"enter num:\n";
		cin>>num;
		ptr=grow(ptr,n,num);
		n++;
		
	}else{
		flag=false;
	}	
	}
	//calling display;
	cout<<"your provided array is:\n";
	display(ptr,n);

   //calling sum function:
   cout<<"Sum of all elements of array is:\t"<<sum(ptr,n)<<endl;
   
   //calling avg function:
   cout<<"avg of all elements of array is:\t"<<avg(ptr,n)<<endl;
   
   //calling max function:
   cout<<"max of all elements of array is:\t"<<max(ptr,n)<<endl;
   
   //calling min function:
   cout<<"min of all elements of array is:\t"<<min(ptr,n)<<endl;
   
   //calling sort function:
   sort(ptr,n);
   cout<<"acceinding of all elements of array is:\t"<<endl;
	display(ptr,n);
	
	//calling sort function:
   dsort(ptr,n);
   cout<<"dcceinding of all elements of array is:\t"<<endl;
	display(ptr,n);
	
	//calling top
	int t;
	cout<<"Enter top how much you want to see:\t";
	cin>>t;
	cout<<"Top "<<t<<" are:\t"<<endl;
	top(ptr,t,n);
	
	//calling lest
	int l;
	cout<<"Enter top how much you want to see:\t";
	cin>>l;
	sort(ptr,n);
	cout<<"les "<<l<<" are:\t"<<endl;
	les(ptr,l,n);
	
	delete[] ptr;
	return 0;
}
