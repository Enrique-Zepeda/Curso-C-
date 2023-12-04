#include<iostream>

using namespace std;

int main(){
	float nota1,nota2,nota3,promedio;
	
	cout<<"Ingresa la nota 1: ";
	cin>>nota1;
	cout<<"Ingrese la nota 2:";
	cin>>nota2;
	cout<<"Ingrese la nota 3:";
	cin>>nota3;
	
	promedio=(nota1+nota2+nota3)/3;
	cout.precision(2);
	cout<<"\nEl promedio es: "<<promedio;
	
	
	
	return 0;
}