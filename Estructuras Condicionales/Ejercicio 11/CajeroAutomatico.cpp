#include<iostream>

using namespace std;

int main(){
	int saldo=1000,opc,ingresar,retirar,total=0;
	
	do{
	cout<<"\nCajero Automatico"<<endl;
	cout<<"1.Ingrese dinero a su cuenta"<<endl;
	cout<<"2.Retirar dinero"<<endl;
	cout<<"3.Ver saldo"<<endl;
	cout<<"4.Salir del cajero oprima"<<endl;
	cout<<"ingrese una opcion:";
	cin>>opc;
	
	switch(opc){
		case 1:	cout<<"Ingrese la cantidad a depositar:";
				cin>>ingresar;
				total=saldo+ingresar;
				cout<<"Su saldo total es de:"<<total;
				cout<<"\n";
				system("pause");
				system("cls");
		break;
		case 2:
                cout<<"Ingrese la cantidad a retirar:";
                cin>>retirar;
                if (retirar <= saldo) {
                    total=total-retirar;
                    cout<<"Su saldo total es de: "<<total;
                } else {
                    cout<<"Fondos insuficientes. Su saldo actual es de: "<<saldo;
                }
                cout<<"\n";
                system("pause");
                system("cls");
                break;	
		break;
		case 3: cout<<"Su saldo es de:"<<total;
				cout<<"\n";
				system("pause");
				system("cls");
		break;
		case 4: cout<<"Saliendo del programa....";
		break;
		default: cout<<"Ingrese una opcion valida";
				cout<<"\n";
				system("pause");
				system("cls");
		break;
	}
		
	}while(opc!=4);
	
	
	
	
	return 0;
}