// Piedra Papel o Tijera.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Jugador.h"
using namespace std;

int p1, p2;
void evaluar(int jug1, int jug2)
{
    p1 = 0;
    p2 = 0;
    if (jug1 == jug2)
    {
        cout << "Empate" << endl;
        
    }
    else 
    {
        if ((jug1 == 1 and jug2 == 2) or (jug1 == 3 and jug2 == 1) )
        {
            p1 += 1;
            cout << "El ganador es el Jugador 1" << endl;
        }
        else if ((jug1 == 2 and jug2 == 1) or (jug1 == 1 and jug2 == 3))
        {
            p2 += 1;
            cout << "El ganador es el Jugador 2" << endl;
        }
        else if (jug1 == 2 and jug2 == 3)
        {
            p1 += 1;
            cout << "El ganador es el Jugador 1" << endl;
        }
        else if (jug1 == 3 and jug2 == 2)
        {
            p2 += 1;
            cout << "El ganador es el Jugador 2" << endl;
        }
    }
    cout << "Puntaje 1: " << p1 << endl;
    cout << "Puntaje 2: " << p2 << endl;
}

int op1, op2;
int main()
{

    Jugador j1;
    Jugador j2;
    do
    {
       op1 = j1.seleccionar();
       op2 = j2.seleccionar();
       if (op1 !=0 or op2 != 0)
       {
           evaluar(op1, op2);
       }
       cout << endl;
    } while(op1 != 0 and op2 != 0);
    
    cout << "Salio del Juego"<<endl;
    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
