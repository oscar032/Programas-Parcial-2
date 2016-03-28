#include <iostream>
#include <stdlib.h>
#include <time.h>

/*  Ingresar numeros aleatorios entre 1-100, en un arreglo de 4x5, dejando la ultima
    para obtener el promedio de los numeros pares de cada una de las columnas.

    Usar un procesimiento para ingresar los datos del arreglo, para calcular el promedio
    de los pares de las columnas y otro para presentar el arreglo.

*/
using namespace std;

const int linea=5;
const int columna=4;
int numeros[linea][columna];

void Ingreso(int numeros[linea][columna]){

    for(int L=0; L<linea-1; L++)
    {   for(int C=0; C<columna; C++)
            {   numeros[L][C]=1+rand()%(100-1);
            }
    }
}

void Calcular(int numeros[linea][columna]){

    int ultima_linea=linea-1, suma=0, c=0;

    for(int C=0; C<columna; C++)
        {   suma=0, c=0;
            for(int L=0; L<linea-1; L++)
                {  if ((numeros[L][C])%2==0)
                    {   suma+=numeros[L][C];
                        c++;

                    }
                }
                if (c>0)
                    {numeros[ultima_linea][C]=(suma/c);}
                else
                    {numeros[ultima_linea][C]=0;}
        }
}

void Presentar(int numeros[linea][columna]){

for(int L=0; L<linea; L++)
    { for(int C=0; C<columna; C++)
        {
            cout<<numeros[L][C]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{   srand(time(0));
    Ingreso(numeros);
    Calcular(numeros);
    Presentar(numeros);
    return 0;
}
