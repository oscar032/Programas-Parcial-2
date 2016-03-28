#include <iostream>
#include <stdlib.h>
#include <time.h>

/*
 x x x x
 x x x x
 x x x x
 ? ? ? ?  --> promedio de los numeros pares.
*/

using namespace std;

const int linea=4;
const int columna=4;
int num[linea][columna];

void Ingreso(int num[linea][columna])
{
    for(int L=0; L<linea-1; L++)
       {
        for(int C=0; C<columna; C++)
        {   cout<<"Numero ["<<L<<"]["<<C<<"].. ";
            cin>>num[L][C];
        }
       }
}

void Promedio(int num[linea][columna])
{
    int ul=linea-1, c=0, suma=0;

    for(int C=0; C<columna; C++)
       { c=0, suma=0;
        for(int L=0; L<linea-1; L++)
        {
            if ((num[L][C])%2==0)
            {   suma+=(num[L][C]);
                c++;
            }
        }
         if(c>0)
            num[ul][C]=suma/c;
         else
          num[ul][C]=0;
       }
}

void Presentar(int num[linea][columna])
{
    for(int L=0; L<linea; L++)
       {
        for(int C=0; C<columna; C++)
        {
            cout<<num[L][C]<<" ";
        }
        cout<<"\n";
       }
}
int main()
{
    Ingreso(num);
    Promedio(num);
    Presentar(num);
    return 0;
}
