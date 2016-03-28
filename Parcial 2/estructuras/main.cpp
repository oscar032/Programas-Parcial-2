#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

struct alumno{
    char nombre[30];
    int p1, p2, p3, promedio;
    char obs[25];
};
alumno alum;

void Ingreso(alumno &alum){
    cout<<"Nombre del alumno..: ";
    cin.getline(alum.nombre, 30);
    cout<<"Parcial 1..: ";
    cin>>alum.p1;
    cout<<"Parcial 2..: ";
    cin>>alum.p2;
    cout<<"Parcial 3..: ";
    cin>>alum.p3;
    cout<<"\n";
}

void Calcular(alumno &alum){
    alum.promedio=(alum.p1+alum.p2+alum.p3)/3;
    if (alum.promedio>=60)

        {strcpy(alum.obs, "APROBADO");
        }
    else
       {strcpy(alum.obs, "REPROBADO");
       }
}

void Presentar(alumno alum){
    cout<<"Alumno: "<<alum.nombre<<"\n"<<"Nota: "<<alum.promedio<<"\n"<<"Observacion: "<<alum.obs<<"\n";
}

int main()
{   Ingreso(alum);
    Calcular(alum);
    Presentar(alum);
    return 0;
}
