 #include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>



int main()
{
int a;
int lm=0;
int nm=0;
int line[100][100];
char ch;
void *mmap(void *addr, size_t len, int prot, int flag, int filedes, off_t off);
int fd = open("text.txt", O_RDONLY, 0);
if(fd < 0) {
  std::cerr << "fileMappingCreate - open failed, fname =  "
            << fname << ", " << strerror(errno) << std::endl;
  return nullptr;
}
struct FileMapping {
  HANDLE hFile;
  HANDLE hMapping;
  size_t fsize;
  unsigned char* dataPtr;
};
while (read(file, &ch , sizeof(char))>0){
nm++;
if (ch == ('\n')) {
line[lm][0]=nm;
line[lm-1][1]=nm-line[lm-1][0];
lm ++;
}

}
scanf("%d", &a);
fseek(file,line[a][0],SEEK_SET);
for(int i=0;i<line[a][1];i++){
read(file, &ch , sizeof(char));
printf("%c",ch);
}
return 0;
}
