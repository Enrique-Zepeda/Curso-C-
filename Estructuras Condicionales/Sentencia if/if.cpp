#include<iostream>

using namespace std;

int main(){
	int numero, dato=5;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero==dato){
		cout<<"El numero es igual a 5";
	}
	else{
		cout<<"El numero es diferente de 5";
	}
	
	
	cout<<"\nEl numero es diferente de numero !=";
	if(numero!=dato){
		cout<<"\nEl numero no es 5";
	}
	else{
		cout<<"\nEl numero es 5";
	}
	
	
	return 0;
}