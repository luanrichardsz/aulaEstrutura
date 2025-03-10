#include <stdio.h>

int f1(){
	static int x = 223;
	x = x + 777;
	printf("Valor de x: %i \n", x);
	return 0;
}

int main(){
	   f1();	
	   f1();
	   f1();
	   return 0;
} 