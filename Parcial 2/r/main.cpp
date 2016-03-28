#include <iostream>

using namespace std;

int num[4], menor, mayor, numeromenor;
int promedio_n5;

void IngresarDatos(int num[])
{
for(int i=0; i<5; i++)
{  do
    { cout<<"Ingresar numero ["<<i<<"]: ";
    cin>>num[i];
    }while(!((num[i]%2==0)and(num[i]>50)));
        }
}



int Nmayor(int num[])
{
    int mayor=0;
    for(int i=0; i<5; i++)
    {   if (num[i]>mayor)
        mayor=num[i];
    }
    return mayor;
}



int Promedio_5(int num[])
{
    int promedio=0, suma=0, contar=0;
    for(int i=0; i<5; i++)
    { if (num[i]%5==0)
        {   suma+=num[i];
            contar++;
        }

        if (contar>0)
            promedio=suma/contar;
        else
            promedio=0;
    }
    return promedio;
}

void Nmenor(int num[], int &menor)
{
    menor=num[0];
    for(int i=0; i<5; i++)
    { if (num[i]<menor)
        menor=num[i];
    }
}
int main()
{   IngresarDatos(num);
    Nmenor(num, menor);
    promedio_n5=Promedio_5(num);
    mayor=Nmayor(num);
    cout<<"Mayor: "<<mayor<<"\n";
    cout<<"Menor: "<<menor<<"\n";
    cout<<"Promedio 5: "<<promedio_n5<<"\n";
    return 0;
}
