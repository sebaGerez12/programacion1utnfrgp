//Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes.
//El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
//Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%

#include<iostream>
using namespace std;

int main() {

float recaudacionSemana1, recaudacionSemana2, recaudacionSemana3, recaudacionSemana4, recaudacionTotal;
int recaudacionPRO, recaudacionSEM, semanas, cien, RPxS1, RPxS2, RPxS3, RPxS4;

cout << "Ingrese recaudación de Semana 1: ";
cin >> recaudacionSemana1;
cout << endl;
cout << "Ingrese recaudación de Semana 2: ";
cin >> recaudacionSemana2;
cout << endl;
cout << "Ingrese recaudación de Semana 3: ";
cin >> recaudacionSemana3;
cout << endl;
cout << "Ingrese recaudación de Semana 4: ";
cin >> recaudacionSemana4;

semanas = 4;
cien = 100;
recaudacionTotal = recaudacionSemana1 + recaudacionSemana2 + recaudacionSemana3 + recaudacionSemana4;
recaudacionPRO = recaudacionTotal / semanas;
RPxS1 = recaudacionSemana1 * 100 / recaudacionTotal;
RPxS2 = recaudacionSemana1 * 100 / recaudacionTotal;
RPxS3 = recaudacionSemana1 * 100 / recaudacionTotal;
RPxS4 = recaudacionSemana1 * 100 / recaudacionTotal;

cout << endl << endl << endl;
cout << "La recaudacion promedio es de: $" << recaudacionPRO << endl;
cout << endl;
cout << "El promedio de recaudacion por cada semana es:" << RPxS1 << "%, "<< RPxS2 << "%, "<< RPxS3 << "%, "<< RPxS4 << "%, " << endl;
cout << endl << endl;


	return 0;
}
