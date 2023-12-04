#include<iostream>

using namespace std;

int main(){
	float producto=0,iva=0;
	
	cout<<"Ingresa el costo del producto: ";
	cin>>producto;
	
	iva=producto*0.16;
	
	cout<<"El precio del producto con el iva aplicado es: "<<producto+iva;
	
	return 0;
}