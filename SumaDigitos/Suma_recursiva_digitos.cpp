// << Ejercicio: Suma de dígitos con recursividad >>

#include <iostream>

using namespace std;

int suma_recursiva (int n);

int main()
{
    int entero;
    setlocale (LC_CTYPE, "Spanish");
    
    cout << "------ SUMA DE DÍGITOS DE UN NÚMERO: ------" << endl << endl;
    do{
    	cout << "Ingrese un entero positivo: " ;
    	cin >> entero;
	} while (entero < 0);
    
    cout <<"SUMA = " << suma_recursiva (entero) << endl;
    
    return 0;
}

int suma_recursiva (int  n)
{
    if (n == 0){
    	return n; // Retorna el mismo número.
	}
	else{
		return ( suma_recursiva (n / 10) + n % 10 ); //Se divide el entero para 10 "n/10" dejando fuera un número, con "n%10" se toma dicho número excluido
	}
}
