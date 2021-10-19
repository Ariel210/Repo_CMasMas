#include<iostream>

using namespace std;

void getFunction();

int main ()
{
    getFunction();
    return 0;
}

void getFunction()
{
    int num;
    int contador = 0;
    //Pointer
    int *number;
    //Memory Address
    number = &num;

    cout<<"Ingrese numero: ";
    cin>>num;

    for(int i=1; i<=*number; i++)
    {
        if(*number%i==0)
        {
            contador++;
        }
    }

    if(contador>2) 
    {
        cout<<"Numero: "<<*number<<"No es primo";
    }
    else
    {
        cout<<"Numero: "<<*number<<"Es primo";
        cout<<"Direccion de memoria: "<<number;
    }
}