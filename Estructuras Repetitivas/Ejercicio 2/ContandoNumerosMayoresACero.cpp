#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numero,conteo=0;
	
	
	do{
		cout<<"Digite un numero:";
		cin>>numero;
		
		if(numero>0){
			conteo ++;
		}
		
	}while(numero!=0);
	
	cout<<"Numeros Mayores a Cero:"<<conteo;
	
	return 0;
}