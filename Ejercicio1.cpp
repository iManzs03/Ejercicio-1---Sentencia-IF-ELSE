/* 1.- Escriba un programa con las siguientes expresiones como expresiones en C++ e imprima el resultado.
 Nota: Las variables a, b, c, d y f pueden inicializarse con cualquier valor.*/
 
 #include<iostream>
 
 using namespace std;
 
 int main(){
    int a = 4, b = 4, c = 6, d = 8, e = 12, f = 14;
 	int ProblemaA = 0, ProblemaB = 0, ProblemaC = 0, ProblemaD = 0;

 	ProblemaA= (a/b) + 1;
 	ProblemaB = (a+b) / (c+d);
	ProblemaC = (a + (b/c)) / (d + e/f);
	ProblemaD = a + (b/(c-d));
	
	cout<< "El resultado del problema A es: "<<ProblemaA<<endl;
	cout<< "El resultado del problema B es: "<<ProblemaB<<endl;
	cout<< "El resultado del problema C es: "<<ProblemaC<<endl;
	cout<< "El resultado del prbolema D es: "<<ProblemaD<<endl;

 }
 
