#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
int potencia(int base, int exp);
int main(){
	int cont;
	long int bin,num,temp;
	bin=0;

	cout << "ingrese un numero" << endl;
	cin >> num;
	temp=num;
	cont=0;
	while(num>0){
		bin = bin + ((num%10)*(potencia(2,cont)));
		cont++;
		num = num/10;
	}
	cout << "el binario de " << temp << " es " << bin << endl;
	return 0;
}

int potencia(int base, int exp){
	int res = 1;
	for(int x=0;x<exp;x++){
		res = res*base;
	}
	return res;
}
