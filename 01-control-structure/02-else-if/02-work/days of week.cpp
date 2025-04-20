#include<iostream>
using namespace std;
int main(){

	int day;
	cout<<"Enter today's day number: ";
	cin>>day;
	
	if(day < 1 || day>7){
		cout<<"INVALID"<<endl<<endl;
	}
	else if(day == 1){
		cout<<"Today is sunday"<<endl;
	}
	else if(day==2){
		cout<<"Today is monday"<<endl;
		
	}
	else if(day == 3){
		cout<<"Today is tuesday"<<endl;
	}
	else if(day == 4){
		cout<<"Today is wednesday"<<endl;
	}
	else if(day == 5){
		cout<<"Today is thrusday"<<endl;
	}
	else if(day == 6){
		cout<<"Today is friday"<<endl;
	}
	else if(day == 7){
		cout<<"Today is saturday"<<endl;
	}
}
