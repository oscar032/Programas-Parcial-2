#include <iostream>
#include <stdlib.h>
#include <time.h>

/*
Crear un arreglo de 3x3, y guardar numeros aleatorios entre 1 y 100
luego presentar el arreglo.

Dejar reservada la ultima linea para la suma de las columnas.
*/
using namespace std;

const int linea=4;
const int columna=3;
int num[linea][columna];

void Ingreso(int num[linea][columna])
{
    for(int L=0; L<linea-1; L++)
       {
        for(int C=0; C<columna; C++)
        {
            num[L][C]=50 +rand()%(100-50);
        }
       }
}

void Ingreso_2(int num[linea][columna])
{
    for(int L=0; L<linea-1; L++)
       {
        for(int C=0; C<columna; C++)
        {   cout<<"Numero ["<<L<<"]["<<C<<"].. ";
            cin>>num[L][C];
        }
       }
}

void SumarColumnas(int num[linea][columna])
{   int ul=linea-1;
    for(int C=0; C<columna; C++)
       {
        for(int L=0; L<linea-1; L++)
        {
            num[ul][C]+=num[L][C];
        }
       }
}

void Presentar(int num[linea][columna])
{
    for(int L=0; L<linea; L++)
       {
        for(int C=0; C<columna; C++)
        {
            cout<<num[L][C]<<" ";
        }
        cout<<"\n";
       }
}
int main()
{   srand(time(0));
    Ingreso(num);
    SumarColumnas(num);
    Presentar(num);
    return 0;
}
