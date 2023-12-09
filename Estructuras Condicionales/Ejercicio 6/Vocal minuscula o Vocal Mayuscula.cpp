#include<iostream>

using namespace std;


int main(){
	char vocal;
	
	
	
	cout<<"Ingresa una vocal: ";
	cin>>vocal;
	
	switch(vocal){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Esta es una vocal minuscula";break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"Esta es una vocal Mayuscula";break;
		default: cout<<"Esto no es una vocal";break;
	}
	return 0;
}