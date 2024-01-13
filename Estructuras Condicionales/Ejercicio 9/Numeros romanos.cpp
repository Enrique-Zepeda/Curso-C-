#include<iostream>

using namespace std;

int main(){
	int unidades,decenas,n;
	
	cout<<"Digite un numero:";
	cin>>n;
	
	unidades=n%10; n/=10;
	decenas=n%10; n/=10;
	cout<<unidades<<endl; 
	cout<<decenas<<endl; 
	cout<<n;
	
}