/*1.-Hacer un programa que alimente solo con números entre 1 y 10 dos matrices una
de 2 x 3 y la otra de 3 x 2, buscar aquellos números de la primera matriz que sean
mayores a 5 y convertirlos a 1, y buscar aquellos números que sean menores a 6
de la segunda matriz y convertirlos a 0. (imprimir la primera matriz y la
modificada)*/
#include<iostream>
using namespace std;
int main(){
	int x[2][3],y[3][2];
	//Digitando datos
	cout<<"\t\t::::DATOS DE LA PRIMERA MATRIZ::::"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			do{
				cout<<"Digite el valor de ["<<i<<"]["<<j<<"]: ";cin>>x[i][j];
			}while(x[i][j]<1||x[i][j]>10);
		}
	}
	cout<<"\t\t::::DATOS DE LA SEGUNDA MATRIZ::::"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			do{
				cout<<"Digite el valor de ["<<i<<"]["<<j<<"]: ";cin>>y[i][j];
			}while(y[i][j]<1||y[i][j]>10);
		}
	}
	cout<<"\n";
	//IMPRIMIENDO LA PRIMERA Y SEGUNDA MATRIZ SIN MODIFICAR
	cout<<"\t\t::::PRIMERA MATRIZ::::"<<endl;
	//Primera Matriz
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n";
	cout<<"\t\t::::SEGUNDA MATRIZ::::"<<endl;
	//Segunda Matriz
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<y[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n"<<endl;
	//CAMBIO DE VALORES(LO QUE TE PIDE EL ENUNCIADO)
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(x[i][j]>5){
				x[i][j]=1;
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			if(y[i][j]<6){
				y[i][j]=0;
			}
		}
	}
	//IMPRIMIENDO LA PRIMERA Y SEGUNDA MATRIZ MODIFICADA
	cout<<"\t\t::::PRIMERA MATRIZ MODIFICADA::::"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n";
	cout<<"\t\t::::SEGUNDA MATRIZ MODIFICADA::::"<<endl;
	//Segunda Matriz
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<y[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
