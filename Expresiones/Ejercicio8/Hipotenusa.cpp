#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float catetoA,catetoB,hipotenusa;
	
	cout<<"Calculadora de Hipetenusa"<<endl;
	cout<<"-------------------------"<<endl;
	
	cout<<"Ingrese el cateto A: ";
	cin>>catetoA;
	cout<<"Ingrese el cateto B: ";
	cin>>catetoB;
	
	hipotenusa=sqrt(pow(catetoA,2)+pow(catetoB,2));
	
	cout.precision(2);
	cout<<"\nLa hipotenusa es de :"<<hipotenusa<<"cm";
	
	return 0;
}