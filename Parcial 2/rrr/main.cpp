#include <iostream>

using namespace std;

int n[5];
int mayor=0, NumeroMenor;
int menor;
int promedio;


void ingreso(int n[])
{
for(int i=0; i<5; i++)
{ do
    { cout<<"ingresar numero [ "<<i<<" ]...: ";
    cin>>n[i];
    }while((n[i]%2==1) and (n[i]<=50));
    }
}

int Mayor(int n[])
{
int num=0;
for(int i=0; i<5; i++)
    {   if (n[i]>num)
        num=n[i];}

    return num;
}


double promedioentre5(int n[])
{
    double promedio=0;
    int suma=0, c=0 ;
    for(int i=0; i<5; i++)
    { if (n[i]%5==0)
        {   suma+=n[i];
            c++;
        }
    if (c>0)
        promedio=suma/c;
    }
    return promedio;
}


void Menor(int numero[], int &NumeroMenor)
{
NumeroMenor=n[0];
for(int i=0; i<5; i++)
{ if (n[i]<NumeroMenor)
        NumeroMenor=n[i];
}
}


int main()
{
    ingreso(n);
    Menor(n, NumeroMenor);
    mayor=Mayor(n);
    menor=NumeroMenor;
    promedio=promedioentre5(n);
    cout<<"menor "<<menor<<"\n";
    cout<<"mayor "<<mayor<<"\n";
    cout<<"promedio: "<<promedio<<"\n";


    return 0;
}
