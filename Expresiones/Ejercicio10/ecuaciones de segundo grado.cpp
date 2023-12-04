#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float b,a,c,resultado1,resultado2;
	
	cout<<"Ingresa a: ";
	cin>>a;
	cout<<"Ingresa b: ";
	cin>>b;
	cout<<"Ingresa c: ";
	cin>>c;
	
	resultado1=(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	resultado2=(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	
	cout<<"El resultado uno es: "<<resultado1<<endl;
	cout<<"El resultado dos es: "<<resultado2;

	
	return 0;
}