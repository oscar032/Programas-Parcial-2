#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int arreglo[10];
int mayores50=0;

int GenerarPar()
{
    int numero=0;
    do
    { numero =1 + rand() % (100-1);
    }while (!(numero%2==0));
    return numero;
}

void GenerarArreglo(int arreglo[])
{
    for (int i=0; i<10; i++)
    {
        arreglo[i]=GenerarPar();
    }
}
void presentar(int arreglo[])
{
    for (int i=0; i<10; i++)
    {
        cout<<i<<": "<<arreglo[i]<<"\n";
    }
}
int ContarM50(int arreglo[])
{   int c=0;
   for (int i=0; i<10; i++)
    {
       if (arreglo[i]>50)
        c++;
    }
    return c;
}

int main()
{   srand(time(0));
    GenerarArreglo(arreglo);
    presentar(arreglo);
    mayores50=ContarM50(arreglo);
    cout<<"Numeros mayores a 50..: "<<mayores50<<"\n";
    return 0;
}
