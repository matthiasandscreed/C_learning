#include<unistd.h>
#include<stdio.h>
#include<string.h>

char *ft_strncat(char *dest, char *src, int nb)
{
  int i;
  int j;
  char *result;
  
  i = 0;
  j = 0;
  result = dest;
  while( dest[i] != '\0')
    i++;
  while( i < nb && src[i])
    {
      result[i] = src[i];
      i++;
      j++; 
    }
  result[i] = '\0';
  return(result);
}

int main()
{
  char src[50] = "Allah est grand !";
  char dest[50] = "Allawakbar !!";
  int nb = 50;

  printf("%s\n",ft_strncat(dest,src,nb));
  return(0);  
}
