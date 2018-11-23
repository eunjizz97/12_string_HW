#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *rfp = NULL;
	FILE *wfp = NULL;
	int i;
	char ogf[100];
	char cpyf[100];
	char str[100];
	int len = 0;
	
	
	printf("original file name : ");
	scanf("%s", ogf);
	printf("copy file name : ");
	scanf("%s", cpyf);
		
	rfp = fopen(ogf, "r");
	wfp = fopen(cpyf, "w");
	
	
	if(rfp == NULL || wfp == NULL)
		printf("파일 못 열음\n");


		
	for(i=0;i<3;i++){
	
		fgets(str, 100, rfp);
		fprintf(wfp, "%s", str);
		len += strlen(str);
		
	}
	

	printf("copy success! (%d bytes copied)\n", len+1); 
	
	fclose(rfp);
	fclose(wfp);
	
	return 0;
}
