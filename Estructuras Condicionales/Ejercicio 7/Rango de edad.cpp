#include<iostream>

using namespace std;


int main(){
	int edad;
	
	cout<<"Ingresa tu edad: ";
	cin>>edad;
	
	if(edad>=18 && edad<=25){
		cout<<"Estas en el rango";
	}
	else{
		cout<<"Estas fuera del rango";
	}
	
	
	
	return 0;
}