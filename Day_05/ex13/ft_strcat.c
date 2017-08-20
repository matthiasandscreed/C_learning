#include<unistd.h>
#include<stdio.h>
#include<string.h>

char *ft_strcat(char *dest, char *src)
{
  int i;
  int j;
  char *result;

  i = 0;
  j = 0;
  result = dest;
  while (dest[i] != '\0')
    i++;
  while(src[j] != '\0')
    {
      result[i] = src[j];
      i++;
      j++;
    }
  result[i] = '\0';
  return(result);
}

int main()
{
  char src[50] = "Allah est grand ! ";
  char dest[50] = "ALLAH WAKBAR !!";

  printf("%s\n",ft_strcat(dest,src));
  return(0);
  
}
