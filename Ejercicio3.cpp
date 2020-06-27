/*La calificación final de un estudiante es el promedio de tres notas: la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% 
y la nota de participación que cuenta el 10% Escriba un programa que lea las tres notas del alumno y escriba su nota final.*/

#include<iostream>

using namespace std;

int main(){
	float NPracticas = 0, NTeorica = 0, NParticipacion = 0, NotaF = 0; 
	cout<<"Digite la nota practica: "; cin>>NPracticas;
	cout<<"Digite la nota teorica: "; cin>>NTeorica;
	cout<<"Digite la nota de participacion: "; cin>>NParticipacion;
	
	NPracticas *= .30;      // NPractica = NPractica + .30
	NTeorica *= .60;
	NParticipacion *= .10;
	
    NotaF = NPracticas + NTeorica + NParticipacion;
    
    cout<<"La nota final es de: "<<NotaF;
	 
	return 0;
}

