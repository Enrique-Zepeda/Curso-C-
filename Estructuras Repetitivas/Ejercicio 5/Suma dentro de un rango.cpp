#include <iostream>

using namespace std;

int main(){
	
	int numero,suma=0;
	
	do{
		cout<<"Ingrese un numero"<<endl;
		cin>>numero;
		suma+=numero;
	}while( ((numero<20)||(numero>30)&&(numero!=0)));
	
	cout<<"La suma es:"<<suma;
	
	
	return 0;
}