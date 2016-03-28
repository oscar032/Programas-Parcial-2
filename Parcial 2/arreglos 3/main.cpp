#include <iostream>

using namespace std;
/* Se tiene que ingresar 5 numeros a un arreglo.
Elaborar un procedimiento para devolver el numero de pares e impares.
Una funcion para contar los numeros mayores a 100.
*/
int numero[4], contar=0;

void IngresarDatos(int numero[])
{
    for(int i=0; i<5; i++)
    {
        cout<<"Ingrese un numero ["<<i<<"]: ";
        cin>>numero[i];
    }
}
void Devolver(int numero[])
{    int par=0, impar=0;
     for(int i=0; i<5; i++)
    {if (numero[i]%2==0)
        par++;
    else
        impar++;
    }
    cout<<"Pares: "<<par<<"\n";
    cout<<"Impares: "<<impar<<"\n";
}

int Contar(int numero[])
{    int c=0;
     for(int i=0; i<5; i++)
    {if (numero[i]>100)
        c++;
    }
    return c;
}

int main()
{   IngresarDatos(numero);
    Devolver(numero);
    contar=Contar(numero);
    cout<<"Cantidad mayor a 100: "<<contar<<"\n";

    return 0;
}
