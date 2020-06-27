// Crea un programa que calcule el área de la siguiente figura, (b * h) / 2, 3.1416*r^2

#include<iostream>

using namespace std;

int main(){
	double b = 10, h = 13, r= 10, AreaCirculo = 0, AreaTriangulo = 0, AreaTotal = 0;
	
	AreaTriangulo = (b * h) / 2; AreaCirculo = 3.1416 * (r*r);
	
	AreaTotal = AreaTriangulo + AreaCirculo;
	
	cout<<"El area de la figura es: "<<AreaTotal<<endl;
	
	
	return 0;
}

