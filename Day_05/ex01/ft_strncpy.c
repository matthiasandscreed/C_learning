#include<unistd.h>
#include<stdio.h>
#include<string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
  int i;
  
  i = 0;
  while(i < n && src[i])
    {
      dest[i] = src[i];
      i++;
    }
  while(i < n)
    {
      dest[i] = '\0';
      i++;
    }
  return (dest);
}

int main(void)
{
  char src[] = "hello";
  char dest [200];
  int n = 3;
 
  ft_strncpy(dest,src,n);
  printf("%s\n",dest);
  return 0;
}
