#include <stdio.h>
#define LENGTH 100
main()
{
  FILE *fd;
  char str[LENGTH];
  /*创建并打开文件*/
  fd = fopen("c_hello.txt", "w+");
  if(fd){
        /*写入字符串*/
        fputs("Hello LinuxKernel", fd);
        fclose(fd);
  }

  fd = fopen("c_hello.txt", "r");
  /*读取文件内容*/
  fgets(str, LENGTH, fd);
  printf("%s\n", str);
  fclose(fd);
}
