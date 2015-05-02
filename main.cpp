#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b; //suma de los valores
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b; //resta de los valores
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b; //multiplicaci�n de los valores
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b; //divisi�n de los valores
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if (a>b)
    {
    return a;
    }
    else if (b>a)
    {
    return b;
    } //comparaci�n de valores mediante if para obtener el mayor
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if (a<b)
    return a;
    else if (b<a)
    return b;
} //comparaci�n de valores mediante if para obtener el menor

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if (a>b && a>c)
    return a;
    else if (b>a && b>c)
    return b;
    else if (c>a && c>b)
    return c;
} //comparaci�n de valores mediante if para obtener el mayor de los tres

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion] = valor;
} //colocar el valor deseado en la posici�n deseada en el arreglo

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion];
} //obtener el valor deseado en la posici�n deseada del arreglo

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int temp;
        for (int i=1;i<tamano;i++)
        {
            for (int j=tamano-1;j>=i;j--)
            {
                if(arreglo[j]<arreglo[j-1])
                {
                    temp=arreglo[j];
                    arreglo[j]=arreglo[j-1];
                    arreglo[j-1]=temp;
                }
            }
        }
    return arreglo[tamano-1];
} //m�todo de "burbuja" aprendido en programaci�n 1 que permite ordenar el arreglo de menor a mayor & as� devolver la �ltima posici�n que ser�a la mayor

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int temp;
        for (int i=1;i<tamano;i++)
        {
            for (int j=tamano-1;j>=i;j--)
            {
                if(arreglo[j]<arreglo[j-1])
                {
                    temp=arreglo[j];
                    arreglo[j]=arreglo[j-1];
                    arreglo[j-1]=temp;
                }
            }
        }
    return arreglo[0];
} //m�todo de "burbuja" aprendido en programaci�n 1 que permite ordenar el arreglo de menor a mayor & as� devolver la primera posici�n que ser�a la menor

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int prom=0;
    for (int i=0;i<tamano;i++)
    {
    prom = prom + arreglo[i];
    }
    prom=prom/tamano;
    return prom;
} //obtener promedio mediante un acumulador que corre un ciclo for para sumar los n�meros en el arreglo & al finalizar los divide por el tama�o del arreglo para la respuesta

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
