#include<iostream>

using namespace std;

int main(){
	int contador=0,tempAlta=0,tempBaja=99999999,media=0,temp;
	
	cout<<"Calculadora de temperatura"<<endl;
	
	do{
		cout<<"Ingrese una temperatura:";
		cin>>temp;
		media=media+temp;
		if(temp>tempAlta){
			tempAlta=temp;
		}
		if(temp<tempBaja){
			tempBaja=temp;
		}
		contador++;
	}while(contador!=6);
		

	cout<<"Temperatura mas Alta:"<<tempAlta<<endl;
	cout<<"Temperatura mas Baja:"<<tempBaja<<endl;
	cout<<"Media de temperatura:"<<media/6;
	
	
	return 0;
}