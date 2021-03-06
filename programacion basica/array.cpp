#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const double PORCION = 2.0/3.0;
const int EMPLEADOS = 30;
const int MESES = 12;

int main(){
	
	double ventas[EMPLEADOS][MESES];
	double suma,umbral,ventas_empleado;
	unsigned int i,m;
	srand(time(0));
	for(i=0;i<EMPLEADOS;i++){
		cout << "numero aleatorio -> " << rand()%100 << endl;
	}
	suma = 0.0;
	for(i=0;i<EMPLEADOS;i++){
		for(m=0;m<MESES;m++){
			cout << "Introduzca las ventas del mes " << m+1 << " para el agente "<< i+1<<": ";
			cin >> ventas[i][m];
			suma += ventas[i][m];
		}
	}

	umbral = PORCION * (suma/EMPLEADOS);

	cout << "Agentes que superan el umbral y sus ventas" << endl;
	for(i=0; i<EMPLEADOS; i++){
		ventas_empleado = 0;
		for(m=0;m<MESES;m++){
			ventas_empleado += ventas[i][m];
		}
		if(ventas_empleado>umbral){	
			cout << i+1 << ": " << ventas_empleado << endl;
		} 
	}

	system("Pause");
	return 0;
}
