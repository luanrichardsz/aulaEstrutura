#include <stdio.h>

int main(void) {
	
	char nomemeses[12][4] = {"JAN","FEV","MAR","ABR","MAI","JUN",
	"JUL","AGO","SET","OUT","NOV","DEZ"};
	
	int diasmeses[12] = {31,28,31,30,31,30,31,31,30,31,30,31}, mes=0;
	printf("Informe o numero do mes: ");
	scanf("%i",&mes);
	
	mes--;
	
	printf(" O mes %s possui %i dias.\n ",nomemeses[mes],diasmeses[mes]);
	
	getchar();
	return 0;
	
}