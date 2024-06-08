#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a, b, c, raiz, op1, op2;

    cout <<"digite variable a: "; cin >>a;
    cout <<"digite variable b: "; cin >>b;
    cout <<"digite variable c: "; cin >>c;

    raiz = (b * b) - (4 * a * c) ;

    if (raiz < 0)
    {
        cout <<"no tiene solucion " <<endl;
    }
    else if (raiz == 0)
    {
        raiz  = sqrt(raiz);
        op1 = (- b + raiz) / (2 * a);
        cout <<"operacion1 " << op1 <<endl;
    } 
    else
    {
        raiz = sqrt(raiz);
        op1 = ( - b + raiz) / (2 * a);
        op2 = ( - b - raiz) / (2 * a);
        cout << "operacion1 " <<op1 << "operacion2 " <<op2 <<endl;

    }

    return 0;

}   