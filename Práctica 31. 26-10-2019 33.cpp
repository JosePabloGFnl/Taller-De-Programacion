#include<iostream> 
#include<conio.h>
using namespace std;

int main(){
	int numeros[100],n,mayor=0;
	
	cout<<"Digite el n�mero de elementos del arreglo: ";
	cin>>n;
	
	for (int i=0;i<n;i++){
		cout<<i+1<<"Digite el n�mero de elementos del arreglo: ";
	cin>>numeros[i];
	
	if (numeros[i]>mayor){
		mayor=numeros[i];
	}
	}
	
	cout<<"\nEl mayor elemento del vector es: "<<mayor<<endl;
	
	getche();
	return 0;
}
