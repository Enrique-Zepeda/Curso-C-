#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x,y,funcion;
	
	cout<<"Ingrese x: ";
	cin>>x;
	cout<<"Ingrese y: ";
	cin>>y;
	
	funcion=sqrt(x)/(pow(y,2)-1);
	
	cout<<"El resultado es: "<<funcion;
	
	return 0;
}