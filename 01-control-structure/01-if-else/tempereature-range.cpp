#include<iostream>
using namespace std;
int main(){

//7:Temperature Range: Write a program to check if the temperature is either below 0°C or above 40°C.
//Ans:
	
	int temp;
	cout<<"Enter todays temperature: ";
	cin>>temp;
	
	if(temp <= 0 || temp >= 40){
		cout<<"Today's temperature is either below 0°C or above 40°C"<<endl;
		
	}
	else{
		cout<<"Today's temperature is not either below 0°C or above 40°C"<<endl;
	}
}
