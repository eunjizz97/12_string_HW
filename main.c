#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp = NULL;
	char s1[100];
	char s2[100]; 
	char s3[100];
	
	fp = fopen("c:\\sample.txt", "w");
	if(fp == NULL)
		printf("파일 못 열음.\n");
		
	printf("input a word : ");
	scanf("%s", s1);
	printf("input a word : ");
	scanf("%s", s2);
	printf("input a word : ");
	scanf("%s", s3);
	
	fprintf(fp, "%s\n%s\n%s\n", s1, s2, s3);
	
	fclose(fp);
	
	return 0;
}
