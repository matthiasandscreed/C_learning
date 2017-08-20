#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

char *ft_strdup(char *src) // revoie un pointeur  sur une nouvelle chaîne  qui est dupliquée depuis s. La mémoire occupé par cette nouvelle chaîne est par malloc
{
  char *string;
  int src_size;
  int i;

  i = 0;
  while(src[src_size])
    src_size++;
  string = (char*)malloc(sizeof(*string) * (src_size));
  while (i < src_size)
    {
      string[i] = src[i];
      i++;
    }
  string[src_size] = '\0';
  return (string);
}
