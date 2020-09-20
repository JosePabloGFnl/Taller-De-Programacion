#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[100][100],filas,columnas;
	char band = 'F';
	cout<<"Digite el número de filas: "; cin>>filas;
	cout<<"Digite el número de columnas: "; cin>>columnas;
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	if(filas==columnas){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(numeros[i][j]==numeros[j][i]){
					band='V';
				}
			}
		}
	}
	if(band == 'V'){
		cout<<"La matriz es simétrica";
	}
	else{
		cout<<"La matriz no es simétrica";
	}
	getche();
	return 0;
}
