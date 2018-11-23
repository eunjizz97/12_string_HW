#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp = NULL;
	int i;
	char filename[100];		//사용자가 검색하려는 파일 이름 
	char word[100];			//사용자가 찾으려는 단어 
	char str[100];			//fgets 함수를 통해 한줄 입력 받은 string 

	
	
	printf("original file name : ");
	scanf("%s", filename);
	printf("word to find : ");
	scanf("%s", word);
		
	fp = fopen(filename, "r");
	
	
	if(fp == NULL)
		printf("파일 못 열음\n");

		
	for(i=0;i<3;i++){
		
		fgets(str, 100, fp);
		if(strncmp(word, str, strlen(word))==0)
			printf("find a word %s\n", word);
		
	}
	

	printf("Serch done!\n"); 
	
	fclose(fp);
	
	return 0;
}
