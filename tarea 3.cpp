#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
srand(5);
	int numero_random;
	int numero_noram,numero_noram2;
	numero_random=rand();
	do{
	
	numero_noram=1 + rand() % (27);
	numero_noram2=1+rand()%(27);
}while(numero_noram!=27 || numero_noram2 !=27);
	cout<<(numero_random);
	cout<<("\n")<<(numero_noram)<< " y "<<(numero_noram2);
	return 0;
}
