#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *rfp = NULL;
	FILE *wfp = NULL;
	char c;
	int i;
	char str[100];
		
	rfp = fopen("c:\\Code\\sample.txt", "r");
	wfp = fopen("c:\\Code\\samplecopy.txt", "w");
	
	printf("original file name : sample.txt\n");
	printf("copy file name : samplecopy.txt\n");
	
	if(rfp == NULL || wfp == NULL)
		printf("파일 못 열음\n");
	
	else
		printf("copy success!\n"); 
		
	for(i=0;i<3;i++){
	
		fgets(str, 100, rfp);
		fprintf(wfp, "%s", str);
		
	}

	
	fclose(rfp);
	fclose(wfp);
	
	return 0;
}
