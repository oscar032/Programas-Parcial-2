#include <iostream>

using namespace std;

int numero[4];
int mayor=0;
int NumMenor, menor;
double promedio;

void Ingresar(int numero[]){
    for(int i=0; i<5; i++)
    {   do
        { cout<<"Ingresar numero "<<i<<": ";
          cin>>numero[i];
        }while(!((numero[i]%2==0) and (numero[i]>50)));
    }
}

int Mayor(int numero[]){
    int NumMayor=0;
    for(int i=0; i<5; i++)
    {   if (numero[i]>NumMayor)
        NumMayor=numero[i];
    }
    return NumMayor;
}

double Promedio5(int numero[]){
    double promedio=0;
    int suma=0, conta5=0 ;
    for(int i=0; i<5; i++)
    { if (numero[i]%5==0)
        {   suma+=numero[i];
            conta5++;
        }

        if (conta5>0)
            promedio=suma/conta5;
        else
            promedio=0;
    }
    return promedio;
}

void Menor(int numero[], int &NumMenor){
    NumMenor=numero[0];
    for(int i=0; i<5; i++)
    { if (numero[i]<NumMenor)
        NumMenor=numero[i];
    }
}

int main()
{
    Ingresar(numero);
    Menor(numero, NumMenor);
    mayor=Mayor(numero);
    menor=NumMenor;
    promedio=Promedio5(numero);
    cout<<"Numero mayor: "<<mayor<<"\n";
    cout<<"Numero menor: "<<menor<<"\n";
    cout<<"Promedio de los divisibles entre 5: "<<promedio<<"\n";
    return 0;
}
