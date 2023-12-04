#include<iostream>

using namespace std;

int main(){
	float notap,notat,notapart,promedio=0;
	
	cout<<"Ingrese las notas en notacion de 0 al 100"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"ingrese la nota de practicas: ";
	cin>>notap;
	cout<<"ingrese la nota teorica: ";
	cin>>notat;
	cout<<"ingrese la nota de participaciones ";
	cin>>notapart;
	
	notap*=0.30;
	notat*=0.60;
	notapart*=0.10;
	
	promedio=(notap+notat+notapart);
	
	cout<<"El promedio general es de: "<<promedio;
	
	return 0;
}