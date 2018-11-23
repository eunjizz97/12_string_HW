#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp = NULL;
	char str1[100];
	char str2[100];
	char str3[100];
		
	fp = fopen("c:\\Code\\sample.txt", "w");
	if(fp == NULL)
		printf("파일 못 열음\n");
		
	printf("input a word : ");
	scanf("%s", str1);
	printf("input a word : ");
	scanf("%s", str2);
	printf("input a word : ");
	scanf("%s", str3);
	
	fprintf(fp, "%s\n%s\n%s\n", str1, str2, str3);
	
	fclose(fp);
	
	return 0;
}
