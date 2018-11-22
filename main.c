#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char src[100] = "Programming course";
	char dst[100];
	
	strcpy(dst, src);
	
	printf("%s (%d)\n", dst, strlen(dst));
	
	return 0;
}
