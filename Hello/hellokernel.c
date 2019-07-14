#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#define LENGTH 100
main()
{
  int fd, len;
  char str[LENGTH];
  /*创建并打开文件*/
  fd = open("hello.txt", O_CREAT | O_RDWR, S_IRUSR | S_IWUSR); 
  if(fd){
	/*写入字符串*/
	write(fd, "Hello LinuxKernel", strlen("Hello LinuxKernel"));
  	close(fd);
  }

  fd = open("hello.txt", O_RDWR);
  /*读取文件内容*/
  len = read(fd, str, LENGTH);
  str[len] = '\0';
  printf("%s\n", str);
  close(fd);
}
