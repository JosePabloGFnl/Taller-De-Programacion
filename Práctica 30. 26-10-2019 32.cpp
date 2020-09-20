#include<iostream> 
#include<conio.h>

using namespace std;
int main(){
	int numeros[100],n;
	
	cout<<"Digite el numero de elementos que va a tener el arreglo: ";
	cin>>n;
	
	for (int i=0;i<n;i++){
		cout<<"Digite un número: ";
		cin>>numeros[i];
	}
	
	for (int i=0;i<n;i++){
		cout<<i<<"->"<<numeros[i]<<endl;
	}
	
	
	getche();
	return 0;
}
