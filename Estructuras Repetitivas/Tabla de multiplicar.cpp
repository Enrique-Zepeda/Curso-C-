#include<iostream>

using namespace std;

int main(){
	int n,aux=1;
	
	cout<<"Ingrese un numero:";
	cin>>n;
	
	while(aux<=10){
		cout<<n<<"x"<<aux<<"="<<n*aux<<endl;
		aux++;	
	}
	
	
	return 0;
}