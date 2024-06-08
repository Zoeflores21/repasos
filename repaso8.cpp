#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a, b, c;

    cout <<"digite el valor de a: "; cin >>a;
    cout <<"digite el valor de b: "; cin >>b;
    cout <<"digite el valor de c: "; cin >>c;

    //calculo el discriminante
    float discriminante = b * b - 4 * a * c ;

    if (discriminante < 0){
        //dos soluciones reales distintas
        float x1 = (- b + sqrt(discriminante)) / ( 2 * a );
        float x2 = (- b - sqrt(discriminante)) / ( 2 * a );
        cout << "las soluciones son: " << x1 << "y" << x2 <<endl;
    } else if (discriminante == 0){
        //una solucion real doble
        float x = - b / (2 * a);
        cout << "la solucion doble es: " <<x <<endl;
    } else {
        //soluciones imaginarias
        float realPart = -b /  (2 * a);
        float imaginaryPart = sqrt (discriminante)/ (2 * a);
        cout << "las soluciones son: "  <<realPart << " + " <<imaginaryPart << "i y"  
        <<realPart << " - " <<imaginaryPart << "i" <<endl;

    }



    return 0;
}