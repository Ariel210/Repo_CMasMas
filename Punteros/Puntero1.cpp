#include<iostream>

using namespace std;

int main ()
{
    int var = 20;
    int *numero = &var;

    cout<<"Valor del puntero: "<<var;

    delete [] numero;
    
    return 0;
}