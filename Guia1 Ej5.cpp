// Un comercio vende tres marcas de alfajores distintas A, B y C.
// Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas
// y luego se informe el porcentaje de ventas para cada una de ellas.
// Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.

#include<iostream>

using namespace std;

int main() {

string A, B, C;
float porcentajeA, porcentajeB, porcentajeC, cien;
int UnidadesVendidasA, UnidadesVendidasB, UnidadesVendidasC, total;


cout << "Ingrese Unidades vendidas marca A:";
cin >> UnidadesVendidasA;
cout << endl;
cout << "Ingrese Unidades vendidas marca B:";
cin >> UnidadesVendidasB;
cout << endl;
cout << "Ingrese Unidades vendidas marca C:";
cin >> UnidadesVendidasC;


total = UnidadesVendidasA + UnidadesVendidasB + UnidadesVendidasC;

porcentajeA = UnidadesVendidasA * 100 / total;

porcentajeB = UnidadesVendidasB * 100 / total;

porcentajeC = UnidadesVendidasC * 100 / total;


cout << endl << endl << endl;
cout << "Porcentaje de ventas de marca A: " << porcentajeA << "%" << endl;
cout << endl;
cout << "Porcentaje de ventas de marca B: " << porcentajeB << "%" << endl;
cout << endl;
cout << "Porcentaje de ventas de marca C: " << porcentajeC << "%" << endl;
cout << endl << endl << endl;

	return 0;
}
