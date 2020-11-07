  #include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <unistd.h>

int main()
{

int a;
int lm=0;
int nm=0;
int line[100][100];
char ch;
int i=0;
struct FileMapping {
  int fd;
  size_t fsize;
  unsigned char* dataPtr;
};
int fd = open( "text.txt", O_RDONLY, 0 );
if(fd<=0){
printf("-1");
}
struct stat st;
fstat(fd, &st);
size_t fsize = (size_t)st.st_size;
unsigned char* mass = (unsigned char*)mmap(0, fsize,PROT_READ,MAP_PRIVATE, fd, 0);
line[0][0]=0;
while (nm>fsize){
nm++;
if (mass[nm] == ('\n')) {
line[lm][0]=nm;
line[lm-1][1]=nm-line[lm-1][0];
lm ++;
printf("%d, %d, index = %d\n", line[lm-1][0],  line[lm-1][1], lm -1 );
}
}
scanf("%d", &a);
//lseek(file,line[a-2][0],SEEK_SET);
for(int i=0;i<line[a-2][1];i++){
//read(file, &ch , sizeof(char));
printf("%c",mass[line[a-2][0]+i]);
}
return 0;
}
