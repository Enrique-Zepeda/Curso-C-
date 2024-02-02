#include <iostream>

using namespace std;

int main(){
	int x=0,y=0,i=1,elev=1;
	
	cout<<"Ingrese x:"<<endl;
	cin>>x;
	cout<<"Ingrese y:"<<endl;
	cin>>y;
	
	for(i; i<=y; i++){
		elev=elev*x;
	}
	
	cout<<"Resultado:"<<elev;
	
	return 0;
}