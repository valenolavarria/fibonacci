#include <stdio.h>

int main() {
	int i;
	printf("%i\n",multiplicatoria(12));
	printf("%i\n",fibonacci(5));
	return 0;
}

int suma(int a, int b) {
	return a+b;
}

int resta(int a, int b) {
	return a-b;
}

int mult(int a, int b) {
	return a*b;
}

int sumatoria (int x) {
	int i;
	int rta = 0;
	for (i=0; i<=x ; i= i+1){
		rta= rta+i;
	}
	return rta;
}


int multiplicatoria (int x) {
	int i;
	int rta= 1;
	for (i=0; i<x; i= i+1) {
		rta= rta*i; 
	}
	return rta; 
}

int fibonacci (int a) {
	int i;
	for(i=0;i<=0;i=i+1){
		int x=0;
		int y=1;
		int aux;
		int aux=x+y;
		int x=y;
		int y=aux;
	}

	
