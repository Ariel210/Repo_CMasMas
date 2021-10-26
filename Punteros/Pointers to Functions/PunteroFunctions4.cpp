#include<iostream>
#include<stdlib.h>

using namespace std;

void getFunction();

int main ()
{
    //Creating Pointer.
    void (*pointer)(void)=getFunction;
    pointer();

    //Memory Address
    cout<<"Memory Address: "<<&pointer<<endl;

    return 0;
}

void getFunction()
{
    string nombre;
    int edad;

    cout<<"Ingrese nombre: ";
    cin>>nombre;
    cout<<nombre;

    cout<<"\n";

    cout<<"Ingrese edad: ";
    cin>>edad;
    cout<<edad;

    cout<<"\n";
}