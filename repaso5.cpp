#include <iostream>
using namespace std;
int main(){
    int x, y, aux;

    cout <<"digite el valor de x: "; cin >>x;
    cout << "digite el valor de y: "; cin >>y;

    aux = x;
    x = y;
    y = aux;

     cout <<"\nel nuevo valor de x es: " <<x <<endl;
     cout <<"el nuevo valor de y es: " <<y <<endl;
     

    return 0;
}