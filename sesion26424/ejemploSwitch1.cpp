/* Leer x cantidad de numeros e imprimir la suma de dichos numeros*/

#include <iostream>

using namespace std;

#define MAX 5

// Vaiables globlales
int nums[MAX];
int pos = 0;

void agregarNum(int num);
int sumar(int suma, int elemAct);

void agregarNum(int num)
{
    if (pos < MAX)
    {
        nums[pos] = num;
        pos++;
    }else{
        cout << "No hay espacio para almacenar" << num << endl;
    }
    
}


int sumar(int suma, int elemAct){
    if(elemAct == -1){
        return suma;
    }

    suma += nums[elemAct];
}
void menu(){
    int op, num, suma;

    cout << "1. Ingresar numero \n";
    cout << "2. Sumar. \n";
    cout << "3. Salir. \n";
    cout << "Digite su opcion";

    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Agregar numero." <<endl;
        cout << "Dime un numero: ";
        cin >> num;
        agregarNum(num);

        break;
    case 2: cout << "Sumar: " << endl;
        cout <<
        break;
    case 3:
        cout <<"Salir" <<endl;
        break;
    default:
        cout << "Opcion invalida...";
        break;
    }
    if(op!=3){
         menu();
    }
}


int main()
{
   menu();

}


