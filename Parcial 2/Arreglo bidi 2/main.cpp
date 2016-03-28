#include <iostream>
#include <stdlib.h>
#include <time.h>
/* x x x ? --> numero mayor.
   x x x ?
   x x x ?
*/
using namespace std;

const int linea=3;
const int columna=4;
int num[linea][columna];

void Ingreso(int num[linea][columna])
{
    for(int L=0; L<linea; L++)
       {
        for(int C=0; C<columna-1; C++)
        {   cout<<"Numero ["<<L<<"]["<<C<<"].. ";
            cin>>num[L][C];
        }
       }
}


void Mayor(int num[linea][columna])
{
    int ultima_columna=columna-1;

    for(int L=0; L<linea; L++)
       {
        for(int C=0; C<columna; C++)
        { if (num[L][C]>num[L][ultima_columna])
            num[L][ultima_columna]=num[L][C];
        }
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
{   Ingreso(num);
    Mayor(num);
    Presentar(num);
    return 0;
}
