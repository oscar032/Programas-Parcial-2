#include <iostream>

using namespace std;

int num[4];
int total=0, n=0, r=0;
double pro=0;

void IngresoDatos(int num[], int &n, int &total)
{   int i;
    for (i=0; i<5; i++)
    {   cout<<"Ingrese numero ["<<i<<"]: ";
        cin>> num[i];

        if ((num[i]%2)==1)
        {n++;
        total+=num[i];
        }
    }
}

double Promedio(int n, int total)
{   double promedio;

    if (n>0)
        promedio=(total/n);
    else
        promedio=0;

    return promedio;
}

int Rango(int num[])
{   int rango=0;
    int i;
    for (i=0; i<5; i++)
    { if ((num[i]>=50) and (num[i]<=100))
    rango++;
    }
    return rango;
}

int main()
{
    IngresoDatos(num, n, total);
    pro=Promedio(n, total);
    r=Rango(num);
    cout<<"Promedio de los impares..: "<<pro<<"\n";
    cout<<"Cantidad entre 50 y 100..: "<<r<<"\n";

    return 0;
}
