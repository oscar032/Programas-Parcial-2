#include <iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>


using namespace std;
struct emple
{
    char nombre[30];
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
    int i,k;
    for(i=0; i<5; i++)
        {
        cout<<"Nombre del empleado...:";
        cin.getline(empleados[i].nombre,30);
        for(k=0; k<3; k++)
        {
            cout<<"Ingresar la venta"<<k<<"...:";
            cin>>empleados[i].ventas[k];
        }

           _flushall();
        }



}

void calcularventas(emple empleados[])
{
    int i, k;
    for(i=0; i<5; i++)
        {
        empleados[i].total=0;
    for(k=0; k<3; k++)
    {
        empleados[i].total+= empleados[i].ventas[k];
    }
        empleados[i].comis= empleados[i].total*0.05;
        }

}


void presentar(emple empleados[])
{
    int i,k;
    for(i=0; i<5; i++)
    {
        cout<<"Empleados"<<empleados[i].nombre<<"\n"; }
        for(k=0; k<3; k++)
        {
            cout<<"Venta "<<k+1<<"..;"<<empleados[i].ventas<<"\n";}
            cout<<"Total Ventas"<<empleados[i].total<<"\n";
            cout<<"Comision "<<empleados[i].comis<<"\n";
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
