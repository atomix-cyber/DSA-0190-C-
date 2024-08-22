#include<iostream>
using namespace std;
int main(){
	double celsius,fahrenheit;
	cout<<"Enter temperature in celsius: ";
	cin>>celsius;
	fahrenheit=(celsius*9.0/5.0)+32.0;
	cout<<celsius<<"C is equal to: "<<fahrenheit<<"F"<< endl;
	return 0;
}
