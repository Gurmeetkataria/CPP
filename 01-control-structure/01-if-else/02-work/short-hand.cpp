#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
	string st =  (age >= 18)? "eligibe": "not eligible";
	cout<<st <<" Thankyou";

}
