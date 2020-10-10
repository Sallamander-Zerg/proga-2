#include <stdio.h>
 #include <fcntl.h>
 #include <sys/types.h>
#include <sys/stat.h>
int main()
{
        int a;
	int lm=0;
	int nm=0;
     	int line[100][100];
     	char ch;
    	FILE *file = fopen("hello.txt","r");
    	int *ptr = mmap ( NULL, line*sizeof(int),
	PROT_READ | PROT_WRITE,
	MAP_PRIVATE | MAP_ANONYMOUS,
	0, 0 ); 
    	line[0][0];
    while (read(file, &ch , sizeof(char))>0){
        nm++;
        if (ch == ('\n')) {  
          line[lm][0]=nm;
          line[lm-1][1]=nm-line[lm-1][0];
          lm ++;
          }
        
          }
               scanf("%d", &a); 
      //lseek(file,line[a][0],SEEK_SET);
      //for(int i=0;i<line[a][1];i++){
      //read(file, &ch , sizeof(char));
      //printf("%c",ch);
      //}for(int i=0; i ");
for(int i=0; i<line[a][1]; i++){
printf("[%d] ",line[i][1]);
}

printf("\n");
int err = munmap(line, 10*sizeof(int));

if(err != 0){
printf("UnMapping Failed\n");
return 1;
} 
    return 0;
}
