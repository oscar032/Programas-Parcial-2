#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int arreglo[5], encendidos=0;

void Generar(int arreglo[], int &encendidos)
{   srand(time(0));
    int numero;
    for (int i=0; i<5;i++)
    {   numero =0 + rand() % (2-0);
        cout<<"Valor["<<i<<"]..: "<<numero<<"\n";
        if (numero==1)
            encendidos++;
    }
}

int main()
{
    Generar(arreglo, encendidos);
    cout<<"LEDs encendidos..: "<<encendidos<<"\n";
    return 0;

}
