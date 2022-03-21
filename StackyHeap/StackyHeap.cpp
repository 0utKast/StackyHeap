#if 0
int* ptr = new int; // a ptr se le asignan 4 bytes en el heap
int* array = new int[10]; // al array se le asignan 40 bytes en el heap


int* ptr1 = new int;
int* ptr2 = new int;
// ptr1 y ptr2 pueden no tener direcciones secuenciales
#endif


#if 0
#include <iostream>

int sumar(int x, int y)
{
	return x + y;

}

void imprimir(int z)
{
	std::cout << z;
	
}


int main() {
	int resultado =sumar(4,7);  
	imprimir(resultado);
	return 0;
}
#endif



#include <iostream>
int sumar(int x, int y)
{
	return x + y;

}
void imprimir()
{
	int z = sumar(4, 7);
	std::cout << z;

}
int main() {
	
	imprimir();
	return 0;
}










