#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*  Elaborar un arreglo de 5 numeros pares enteros:
    1. Elaborar una funcion que genere un numero par entre 50-150.
    2. Elaborar un procedimiento donde se rellene el arreglo usando la funcion
    que genera los numeros.
    3. Elaborar un procedimiento que me devuelva el numero mayor y menor.
    4. Procedimiento para presentar los numeros.

    En el programa principal llamar el ingreso, mayor menor y presentar.
    Presentar las variables de mayor y menor.
*/

int arreglo[5];
int mayor=0, menor=0;

int GenerarPares()
{
    int numero=0;
    do{
        numero=50 +rand()%(150-50);
    }while (numero%2==1);
    return numero;
}

void Relleno(int arreglo[])
{
    for(int i=0; i<5; i++)
    {
        arreglo[i]=GenerarPares();
    }
}

void MayorMenor(int arreglo[], int &mayor, int &menor)
{   mayor=0;
    for(int i=0; i<5; i++)
    { if (mayor<arreglo[i])
        mayor=arreglo[i];
    }


    menor= arreglo[0];
    for(int n=0; n<5; n++)
    {
        if (menor>arreglo[n])
            menor=arreglo[n];
    }
}

void Presentar(int arreglo[])
{
    for(int i=0; i<5; i++)
    {
        cout<<i<<": "<<arreglo[i]<<"\n";
    }
}

int main()
{   srand(time(0));
    Relleno(arreglo);
    Presentar(arreglo);
    MayorMenor(arreglo, mayor, menor);
    cout<<"El numero mayor es: "<<mayor<<"\n";
    cout<<"El numero menor es: "<<menor<<"\n";
    return 0;
}
