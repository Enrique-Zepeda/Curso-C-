#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int opc,n,cubo;
	do{
	cout<<"Menu"<<endl;
	cout<<"1.Cubo de un numero"<<endl;
	cout<<"2.Numero par o impar"<<endl;
	cout<<"0.Salir"<<endl;
	cout<<"Ingresa un opcion:";
	cin>>opc;
	
		switch(opc){
			case 1:
				cout<<"Ingrese un numero:"<<endl;
				cin>>n;
				cubo=pow(n,3);
				cout<<"El cubo es:"<<cubo<<endl;
				system("PAUSE");
				system("cls");
				break;
			case 2:	cout<<"Ingrese un numero:"<<endl;
					cin>>n;
					if(n%2==0){
						cout<<"El numero es par"<<endl;
					}else{
						cout<<"El numero es impar"<<endl;
					}
					system("PAUSE");
					system("cls");
					break;
			case 0: cout<<"Saliendo...";
			break;
			default: cout<<"Opcion Invalida"<<endl;
			system("PAUSE");
			system("cls");
			break;
		}
	}while(opc!=0);
	
	return 0;
}