#include <iostream>

using namespace std;

int main(){
	int n,suma=0;
	
	cout<<"Digite el nuemro de elementos:";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		suma+=i;
	}
	
	cout<<"\n la suma es:"<<suma;
	return 0;
}