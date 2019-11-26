// << Ejercicio: Suma de d�gitos con recursividad >>

#include <iostream>

using namespace std;

int suma_recursiva (int n);

int main()
{
    int entero;
    setlocale (LC_CTYPE, "Spanish");
    
    cout << "------ SUMA DE D�GITOS DE UN N�MERO: ------" << endl << endl;
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
    	return n; // Retorna el mismo n�mero.
	}
	else{
		return ( suma_recursiva (n / 10) + n % 10 ); //Se divide el entero para 10 "n/10" dejando fuera un n�mero, con "n%10" se toma dicho n�mero excluido
	}
}
