#include <iostream>

using namespace std;

int main(){
	int n,suma=0;
	
	cout<<"Ingresa un numero:";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		if(i&2!=0){
			suma+=i;
		}
	}
	
	cout<<"La suma de los numeros impares es:"<<suma;
	
	
	return 0;
}