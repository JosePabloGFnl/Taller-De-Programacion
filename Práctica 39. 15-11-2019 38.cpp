#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[3][3];
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<"Digite un n�mero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	cout<<"Matriz Original\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
		cout<<"Matriz Transpuesta\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numeros[j][i]<<" ";
		}
		cout<<"\n";
	}
	getche();
	return 0;
}
