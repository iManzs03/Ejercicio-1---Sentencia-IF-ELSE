/*2.- Escriba un programa que lea las tres notas de un alumno y calcule la nota final media de dicho alumno (Promedio).*/

#include<iostream>

using namespace std;

int main(){
	int Nota1 = 8, Nota2 = 10, Promedio = 0;
	float Nota3 = 7;
	
	
  Promedio = (Nota1 + Nota2 + Nota3) / 3;
	
	cout<<"El promedio es de: "<<Promedio<<endl;
	
	return 0;
	
}

