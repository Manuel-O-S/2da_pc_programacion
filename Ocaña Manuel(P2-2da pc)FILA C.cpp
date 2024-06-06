/*2.-Desarrollar un programa en C++ que gestione los datos de empleados,
diferenciando entre empleados contratados y nombrados. El programa debe
solicitar al usuario el nombre, tipo de empleado (C-contratado o N-nombrado) y
sueldo básico de cada empleado, calcular sus deducciones de AFP (8%) y seguro
(5%) del sueldo, aplicar una bonificación según el tipo de empleado (C=8% O
N= 12% al sueldo básico), y determinar el sueldo neto. Finalmente, debe mostrar
los detalles de cada empleado y proporcionar un resumen consolidado de la
cantidad de empleados y el total acumulado de sueldos netos para ambos tipos
de empleados.*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	string b[100];
	string nombre[100];
	int n=0,opc=0;
	float sueldoB[100],sueldoN[100],afp[100],seguro[100],bon=0.0,s=0.0;
	do{
		cout<<"Digite la cantidad de empleados: ";cin>>n;	
	}while(n<0);//Consistencia
	for(int i=0;i<n;i++){
		bon=0.0;
		opc=0;
		//DIGITANDO DATOS
		cout<<"\nDigite el nombre del empleado: ";cin>>nombre[i];
		cout<<"Digite el tipo de empleado: ";
		
		do{
		
			cout<<"\n [1].Nombrado";
			cout<<"\n [2].Contratado";
			cout<<"\nopc:";cin>>opc;
		}while(opc!=1&&opc!=2);//Consistencia
		switch(opc){
			case 1:
				b[i]="Nombrado";
				bon=0.12;
				break;
			case 2:
				b[i]="Contratado";
				bon=0.08;
				break;
			default:
				break;
		}
		do{
			cout<<"\nDigite el Sueldo Basico del empleado:";cin>>sueldoB[i];
		}while(sueldoB[i]<0);//Consistencia
		//CALCULANDO DATOS
		afp[i]=sueldoB[i]*0.08;
		seguro[i]=sueldoB[i]*0.12;
		sueldoN[i]=sueldoB[i]-afp[i]-seguro[i]+sueldoB[i]*bon;
		s=s+sueldoN[i];
	}
	//IMPRIMIENDO DATOS
	cout<<"\n\t\t:::RESUMEN CONSOLIDADO:::"<<endl;
	cout<<"Total de empleados: "<<n<<endl;
	cout<<setw(20)<<left<<"NOMBRE"<<setw(20)<<left<<"SUELDO BASICO"<<setw(20)<<left<<"SUELDO NETO"<<setw(20)<<left<<"TIPO DE EMPLEADO"<<endl;
	for(int i=0;i<n;i++){
		cout<<setw(20)<<left<<nombre[i]<<setw(20)<<left<<sueldoB[i]<<setw(20)<<left<<sueldoN[i]<<setw(20)<<left<<b[i]<<endl;
	}
	cout<<"\nTOTAL DE SUELDO NETOS ACUMULADO: "<<s<<endl;
	return 0;
}

