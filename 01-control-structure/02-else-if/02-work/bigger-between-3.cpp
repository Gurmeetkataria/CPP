#include<iostream>
using namespace std;
int main(){

	int n1;
	int n2;
	int n3;
	
	cout<<"Enter a number: ";
	cin>>n1;
	cout<<"Enter 2nd number: ";
	cin>>n2;
	cout<<"Enter 3rd number: ";
	cin>>n3;
	if(n1 >= n2 && n1 >= n3){
		cout<<"This greater of all:"<<n1;
	}
	else if(n2 >= n1 && n2 >= n3){
		cout<<"This is greater of all:"<<n2;
	}
	else if( n1 >= n2 && n1 <= n3){
		cout<<"This is medium number:"<<n1;
	} 
	else if (n2 >= n1 && n2 <= n3){
		cout<<"This is medium number:"<<n2;
	}
	else if (n3 >= n1 && n3 <= n2){
		cout<<"This is medium number:"<<n2;
	}
	else if (n3 >= n1 && n3 >= n2){
		cout<<"This is greater of all:"<<n3;
	}
	else {
		cout<<"INVALID";
	}
}
