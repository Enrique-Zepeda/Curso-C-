#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3,n4;
	
	cout<<"Ingrese un numero:";
	cin>>n1;
	cout<<"Ingrese otro numero:";
	cin>>n2;
	cout<<"Ingrese otro numero:";
	cin>>n3;
	cout<<"Ingrese el ultimo numero:";
	cin>>n4;
	
	if(n4==n1 || n4==n2 || n4==n3){
		cout<<"El ultimo numero coincide con alguno de los anteriores";
	}
	else{
		cout<<"El ultimo numero no coincide con ninguno de los anteriores";
	}
	
	return 0;
}