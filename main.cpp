#include <iostream>
using namespace std;
//Se ingresa un entero por teclado.
// Se desea determinar si el número ingresado es primo o no. Utilice bucles "while".
main(){
int numero, x=1, acumula=0;
    cout << "Ingrese el numero entero: ";
    cin >> numero;
        while(x <= numero){
            if (numero%x==0){
                    acumula++;
                }
                x++;
            }
            if (acumula > 2){
                cout << "El numero no es primo " << endl;
            }
            else {
                cout << "El numero es primo " << endl;
        }

}