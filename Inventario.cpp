	#include <iostream>
	#include <string>
	#include <stdio.h>
	#include <stdlib.h>

	using namespace std;
	
	string productos [5][3]=
	{
		{"001", "Iphone x", "0"},
		{"002", "Laptop Dell", "5"},
		{"003", "Samsung", "2"},
		{"004", "Mouse", "100"},
		{"005", "Audifonos", "25"},
	};
	
	void movimientodeinventario (string codigo, int cantidad, string tipodemovimiento){
		for (int i=0; i<5; i++)
		{
			if (productos[i][0] == codigo){
				if (tipodemovimiento == "+"){
					productos [i][2] = to_string(stoi(productos[i][2]) + cantidad);
				}else {
					productos [i][2] = to_string(stoi(productos[i][2]) - cantidad);
				}
			}
		}
	}
	
	void listarproductos () {
			system ("cls");
			cout << endl << "listado de productos" << endl << "Codigo, Nombre, Cantidad" << endl;				
			for (int i=0; i<5; i++)
			{
				cout << productos [i][0] << " | " << productos [i][1]  << " | " << productos [i][2] << endl;
			}
					
	}
	
	void ingresodeinventario() {
		
		string codigo = "" ;
		int cantidad = 0 ;
		
		system ("cls");
		cout << endl << "Ingreso de productos" << endl << endl << "Ingrese el codigo del producto:";				
		cin >> codigo;
		cout << endl << "Ingrese la cantidad: ";
		cin >> cantidad;
		cout << endl;
		movimientodeinventario ( codigo, cantidad, "+");
	}

		void salidadeinventario() {
		
		string codigo = "" ;
		int cantidad = 0 ;
		
		system ("cls");
		cout << endl << "Ingreso de productos" << endl << endl << "Ingrese el codigo del producto: ";				
		cin >> codigo;
		cout << endl << "Ingrese la cantidad:  ";
		cin >> cantidad;
		cout << endl;
		movimientodeinventario ( codigo, cantidad, "-");
	}
	void ajustenegativo() {
		
		string codigo = "" ;
		int cantidad = 0 ;
		
		system ("cls");
		cout << endl << "Ingreso de productos" << endl << endl << "Ingrese el codigo del producto: ";				
		cin >> codigo;
		cout << endl << "Ingrese la cantidad:  ";
		cin >> cantidad;
		cout << endl;
		movimientodeinventario ( codigo, cantidad, "-");
	}

	void ajusteposotivo() {
		
		string codigo = "" ;
		int cantidad = 0 ;
		
		system ("cls");
		cout << endl << "Ingreso de productos" << endl << endl << "Ingrese el codigo del producto: ";				
		cin >> codigo;
		cout << endl << "Ingrese la cantidad:  ";
		cin >> cantidad;
		cout << endl;
		movimientodeinventario ( codigo, cantidad, "+");
	}
	
	int main (int argc, char const *argv[])
	{
		int opc=0;
		while (true)
		{
			system ("cls");
			
			cout << "Sistema de invetario" << endl << "*********************" << endl << endl << "1- Productos" << endl << "2- Ingreso de inventario" << endl << "3- Salida de inventario" << endl << "4- Ajuste de negativo de inventario" << endl << "5- Ajuste positivo de Inventario" << endl << "0- salida de inventario" << endl << "Ingrese su opcion: ";
			cin>> opc;
			
			switch (opc)
			{
				case 1:
					listarproductos();
					break;
				
					
				case 2:
					{
					ingresodeinventario();
					break;
					}
					
				case 3:
					{
					salidadeinventario();
					break;
					}
				case 4:
					{
					ajustenegativo();
					break;
					}
					case 5:
					{
					ajusteposotivo();
					break;
					}

				default:
					break;
					
			}
			system ("pause");
			
			if (opc == 0)
			{
				break;
			}
		} 
		return 0;
	}
