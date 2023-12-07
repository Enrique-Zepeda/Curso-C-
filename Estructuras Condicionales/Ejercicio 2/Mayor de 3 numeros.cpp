#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3;
	
	cout<<"Ingrese un numero:";
	cin>>n1;
	cout<<"Ingrese otro numero:";
	cin>>n2;
	cout<<"Ingrese otro numero:";
	cin>>n3;
	
	if(n1==n2 && n2==n3){
		cout<<"Los numeros son iguales";
	}
	else if(n1>=n2 && n1>=n3){
		cout<<"El numero mayor es n1: "<<n1;
	}
	else if(n2>=n1 && n2>=n3){
		cout<<"El numero mayor es n2: "<<n2;
	}
	else{
		cout<<"Numero mayor es n3: "<<n3;
	}
	
	return 0;
}