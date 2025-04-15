#include <stdio.h>

int main()
{
	int x = 10;
	int *ponteiro;
	ponteiro = &x;
	int y = 20;
	*ponteiro = y;
	printf("x: %d\ny: %d", x, y);
	getchar();
	return 0;
}
