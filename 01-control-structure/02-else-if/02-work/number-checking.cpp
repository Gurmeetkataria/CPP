#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num > 0 && num % 2==0){
		cout<<"Postive even";
	}
	else if(num < 0 && num % 2==0){
		cout<<"Negative even";
	}
	else if(num > 0 && num % 2==1){
		cout<<"Positive odd";
	}
	else if(num < 0 && num % 2==1){
		cout<<"Negative odd";
	}
	

	

	



}
