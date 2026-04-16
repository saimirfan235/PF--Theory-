#include<iostream>
using namespace std;
int main() 
{
	int temperature;
	cout<<"enter a temperature:";
	cin>>temperature;
	if(temperature<=-50 &&temperature>=50){
		cout<<"the number is valid"<<endl;
	}
	return 0;
}