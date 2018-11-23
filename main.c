#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp = NULL;
	char c;
	int i;
	char str[100];
		
	fp = fopen("c:\\Code\\sample.txt", "r");
	if(fp == NULL)
		printf("파일 못 열음\n");
		
	for(i=0;i<3;i++){
	
		fgets(str, 100, fp);
		printf("%s", str);
		
	}

		
	
	fclose(fp);
	
	return 0;
}
