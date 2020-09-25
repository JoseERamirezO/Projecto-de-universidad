#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>

using namespace std;

string libros [11] [3];


void cargarlibros(){
    libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion (Guia para docentes)"; libros[0][2] = "Bill Gates";
	libros[1][0] = "Algoritmos"; libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos"; libros[1][2] = "Turing";
	libros[2][0] = "Algoritmos"; libros[2][1] = "Breves Notas sobre Analisis de Algoritmos"; libros[2][2] = "Emilio";
	libros[3][0] = "Algoritmos"; libros[3][1] = "Fundamentos de Informatica y Programacion"; libros[3][2] = "Alfredo";
	libros[4][0] = "Algoritmos"; libros[4][1] = "Temas selectos de estructuras de datos"; libros[4][2] = "Chesseter";
	libros[5][0] = "Algoritmos"; libros[5][1] = "Teoria sintactico-gramatical de objetos"; libros[5][2] = "Queen";
	libros[6][0] = "Base de Datos"; libros[6][1] = "Apuntes de Base de Datos 1"; libros[6][2] = "Alex";
	libros[7][0] = "Base de Datos"; libros[7][1] = "Base de Datos (2005)"; libros[7][2] = "Fast";
	libros[8][0] = "Base de Datos"; libros[8][1] = "Base de Datos (2011)"; libros[8][2] = "xbox";
	libros[9][0] = "Base de Datos"; libros[9][1] = "Base de Datos Avanzadas (2013)"; libros[9][2] = "Algo";
	libros[10][0] = "Base de Datos"; libros[10][1] = "Diseno Conceptual de Bases de Datos"; libros[10][2] = "sep";

}

int main (int argc, char const *argv[])

{
    cargarlibros();

    srand (time(NULL)); 

    bool salir = false;
    while ( salir == false)
    {
        string buscar ="";
        system("cls");
        cout << "Ingrese la descripcion del libro que busca: ";
        cin >> buscar;

        //busqueda
        for (int i = 0; i < 11; i++)
        {
            string autor;
            string libro = libros [i][2];
            
            string libroenminuscula = libro;
            string autorenminiscula=autor;
            
            transform (libroenminuscula.begin(), libroenminuscula.end(), libroenminuscula.begin(), ::tolower);
            transform (buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
            transform (autorenminiscula.begin(), autorenminiscula.end(), autorenminiscula.begin(), ::tolower);


            if (libroenminuscula.find(buscar) != string::npos  || autor.find(buscar) != string::npos )
            {
                cout << "libro encontrado " << libro << " de  " << libros [i][1] << endl;
                cout << "tambien te sugerimos estos libros" << endl;
                int sugerencia1 = rand () %10+1;
                int sugerencia2 = rand () %10+1;
                int sugerencia3 = rand () %10+1;
                cout << "sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << "sugerencia 2: " << libros[sugerencia3][1] << endl;
                cout << "sugerencia 3: " << libros[sugerencia2][1] << endl;
                 

                salir = true;
                break;
            }
        }
        

        if ( salir == false)
        {
            char continuar = 'n';
            while (true)
            {
                system ("cls");
                cout << "No se encontro el libro que busca. ¿Desea continuar? s/n  : ";
                cin >> continuar;

                if (continuar == 's'|| continuar == 'S')
                {
                    break;
                }
                else if (continuar == 'n'|| continuar == 'N')

                salir=true;
                break;
            }
        }
    }
    


    return 0;
}