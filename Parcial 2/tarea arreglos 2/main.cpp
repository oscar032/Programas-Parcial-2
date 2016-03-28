#include <iostream>

using namespace std;
int number[4];
int factorial[4];
int numero;

void IngresoDatos(int number[])
{   int i;
    for (i=0; i<5; i++)
    {   do{
        cout<<"Ingrese numero ["<<i<<"]: ";
        cin>> number[i];
        }while ((number[i]<1) or (number[i]>10));
    }
}

void Ingresar(int &numero)
{
    cout<<"Ingrese numero..: ";
    cin>>numero;
}
int Factorial(int numero)
{
    /* int i=0;
        int fac=1;
        for (i=0; i<numero; i++)
        {fac =fac*i;}
        return fac;
    */
    int factorial=numero;
    if (numero!=0)
    {for(int n=numero-1; n>=1; n--)
    { factorial=factorial*n;}}
    else
        {factorial=1;}

    return factorial;
}

void PresentarFactorial(int number[])
{   int facto;
    for(int i=0; i<5; i++)
      {facto =Factorial(number[i]);
      cout<<"Factorial de "<<number[i]<<" es "<<facto<<"\n";
      }
}
int main()
{
    IngresoDatos(number);
    PresentarFactorial(number);
    return 0;
}
