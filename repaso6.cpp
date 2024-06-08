/*la calificacion final de un estudiante es la media ponderada de tres notas:
la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un 
60% y la nota del participacion que cuenta el 10% restante. escriba un programa
que lea de la entrada estandar las tres notas de un alumno y escriba en la 
salida estandar su nota final  */

#include <iostream>

using namespace std;

int main(){
    float practica, teorica, participacion, nota_final = 0;

    cout <<"digite la nota de practica: "; cin >>practica;
    cout <<"digite la nota de teorica: "; cin >>teorica;
    cout <<"digite la nota de participacion: "; cin >>participacion;

    practica *= 0.30; //practica = practica * 0.30
    teorica *= 0.60;
    participacion *= 0.10;

    nota_final = practica + teorica + participacion;
    return 0;
}