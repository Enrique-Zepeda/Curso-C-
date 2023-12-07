#include<iostream>

using namespace std;

int main(){
	
	int n1, n2;
	
	cout<<"Ingrese un numero:";
	cin>>n1;
	cout<<"Ingrese un numero:";
	cin>>n2;
	if(n1==n2){
		cout<<"Los numeros son iguales";
	}
	else if(n1>n2){
		cout<<"El n1 "<<n1<<" es mayor que n2 "<<n2;
	}
	else{
		cout<<"El n2 "<<n2<<" es mayor que n1 "<<n1;
	}
	
	return 0;
}