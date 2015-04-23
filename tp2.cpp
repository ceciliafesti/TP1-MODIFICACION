/* Comparacion de variables
CeciliaFesti
22/04/2015
*/

#include <iostream>

using namespace std;

int main()
{
    int number1 = 3;
    float number2 = 2.3;
    if (number1 > number2){
        cout << "El numero " << number1 << " es menor que el numero " << number2 << endl << endl;
    } else {
        cout << "El numero " << number2 << " es menor que el numero " << number1 << endl << endl;
    }
    bool condition1 = true;
    bool condition2 = false;
    cout << "Las siguientes condiciones tienen como comparacion una condicion verdadera y una falsa" << endl;
    if (condition1 || condition2){
        cout << "Una o las dos condiciones resultan ser verdaderas" << endl;
    }
    if (condition1 && condition2){
        cout << "Las dos condiciones son verdaderas" << endl << endl;
    } else {
        cout << "Una de las dos condiciones no es verdadera" << endl << endl;
    }
    char c = 'c';
    char d = 'd';
    if (c != d){
        cout << "La letra " << c << " es distinta de la letra" << d << endl << endl;
    }
    string hola = "hola";
    string chau = "chau";
    string ambos = hola+chau;
    cout << "Sumar hola y chau tiene como resultado " << ambos;
}
