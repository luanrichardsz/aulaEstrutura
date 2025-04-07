#include <stdio.h>
int main(void){
	
	int vetor[5] = {1,2,3,4,5};
	
	for(int x = 0; x < 5; x++){
		printf("%i\n", vetor[x]);
	}
	
	printf("Tamanho: %i bytes \n", sizeof(vetor));
	printf("Elementos: %i elementos", sizeof(vetor) /sizeof(int));
	getchar();
	return 0;
}