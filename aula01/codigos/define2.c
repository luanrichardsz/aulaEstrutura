#include <stdio.h>
#define SOMA(a,b) (a+b)

int main(){
	int a,b;
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	printf("%d + %d = %d\n", a,b,SOMA(a,b));
	return 0;
}