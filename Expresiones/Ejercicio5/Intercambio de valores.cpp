#include<iostream>

using namespace std;

int main(){
	int a=10,b=20,aux;
	
	cout<<"El valor de a es:"<<a<<endl; 
	cout<<"El valor de b es:"<<b<<endl; 
	
	aux=a;
	a=b;
	b=aux;
	
	cout<<"El nuevo valor de a es:"<<a<<endl; 
	cout<<"El nuevo valor de b es:"<<b<<endl;
	
	return 0;
}