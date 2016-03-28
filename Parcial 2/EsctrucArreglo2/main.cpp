#include <iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;
struct emple
{   char nombre[30];
    int ventas[3];
    double total,comis;
};
emple empleados[5];
/*
Procedimiento de ingreso del nombre y las ventas
de todos los empleados
*/
void ingreso(emple empleados[])
{
    for(int i=1; i<6; i++)
    {
        cout<<"Nombre del empleado "<<i<<"...: ";
        cin.getline(empleados[i].nombre, 30);
        for(int k=1; k<4; k++)
        {
            cout<<"Ingresar la venta "<<k<<"...: ";
            cin>>empleados[i].ventas[k];
        }
        _flushall();
    }
}

void calcularventas(emple empleados[])
{
    for(int i=1; i<6; i++)
    { empleados[i].total=0;
        for(int k=1; k<4; k++)
        {
        empleados[i].total+= empleados[i].ventas[k];
        }
      empleados[i].comis= empleados[i].total*0.05;
    }
}

void presentar(emple empleados[])
{
    for(int i=1; i<6; i++)
    {   cout<<"--------------------------------\n";
        cout<<"Empleado: "<<empleados[i].nombre<<"\n";

        for(int k=1; k<4; k++)
        {
            cout<<"Venta "<<k<<": "<<empleados[i].ventas[k]<<"\n";
        }
        cout<<"Total Ventas: "<<empleados[i].total<<"\n";
        cout<<"Comision: "<<empleados[i].comis<<"\n\n";
        cout<<"--------------------------------\n\n";
    }
}
/*
Elaborar un procedimiento para calcular el total de las
ventas, la comisión que es el 5% del total de las ventas..
*/
int main()
{
    ingreso(empleados);
    calcularventas(empleados);
    presentar(empleados);
    return 0;
}
