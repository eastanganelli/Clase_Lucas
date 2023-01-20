#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {

    /* cout << "Ingrese dos valores" << endl;

    int valor1, valor2;

    cin >> valor1;
    cin >> valor2;
    if (valor1>valor2)
    {
        cout << "El numero" << valor1 << "es mas grande";
    } else if (valor1==valor2){
        cout << "Los numeros son iguales!";
    } else {
        cout << "El numero" << valor2 << "es mas grande";
    }

    if(valor1 == valor2)
        cout << "Son el mismo nro";
    else {

        if(valor2 > valor1) {
            int aux = valor1;
            valor1 = valor2;
            valor2 = valor1;
        }

        cout << "El numero " << valor1 << " es mas grande";
    } */
    
    cout << "Menu\nElegir opcion:\na\tb\tc\tx" << endl;

    char menu_sel = '\0';
    
    do {

        cin >> menu_sel;

        switch (menu_sel) {
            case 'a':
            case 'b':
            case 'c':
                cout << "Ha seleccionado caracter correcto" << endl;
                break;
            case 'x':
                cout << "Ha seleccionado  x" << endl;
                return 0;
            default:
                cout << "Ha ingresado un valor incorrecto" << endl;
                break;
        }
    } while (!(menu_sel == 'a' && menu_sel == 'b' && menu_sel == 'c'));

    cout << "El caracter seleccionado es " << menu_sel;

    return 0;
}
