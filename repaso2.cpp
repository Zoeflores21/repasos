/*realice un programa que lea la entrada estandar los siguientes datos de una persona:
        
        edad: dato de tipo entero.
        sexo: dato de el tipo caracter.
        altura en metros: datos de el tipo real.

tras leer los datos, el programa debe mostrar en la salida estandar. */

#include <iostream>
using namespace std;
int main(){
    int edad;
    char sexo[10];
    float altura;
    cout << "digite su edad: ";
    cin >> edad;
    cout <<"digite su sexo: ";
    cin >> sexo;
    cout << "digite su altura en metro: ";
    cin >> altura;

    cout <<"\nedad: " <<edad <<endl; 
    cout <<"sexo: " <<sexo <<endl;
    cout <<"altura en metros: " <<altura <<endl;
    

    return 0;
}