#include<iostream>
using namespace std;
int main(){
	int n1, n2;
	cout<<"Enter two number: ";
	cin>> n1 >>n2;
	
	char sign;
	cout<<"Enter a operator ( + , - , * , /): ";
	cin>>sign;
	
	if(sign == '+'){
		cout<<n1 + n2;
	}
	else if ( sign == '-' ){
		cout<<n1 - n2;
	}
	else if (sign == '*'){
		cout<<n1 * n2;
	}
	else if (sign == '/'){
		cout<<n1 / n2;
	}
	else{
		cout<<"INVALID";
	}
}
