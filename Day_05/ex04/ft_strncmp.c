#include<unistd.h>
#include<stdio.h>
#include<string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n) // La fonction strcmp() compare les deux chaînes s1 et s2. Elle renvoie un entier négatif, nul, ou positif, si s1 est respectivement inférieure, égale ou supérieure à s2. 
{
  unsigned int i;

  i = 0;
  while((s1[i] || s2[i]) && (i < n ))
    {
      if (s1[i] < s2[i])
	return (-1);
      if (s1[i] > s2[i])
	return (1);
      i++;
    }
  return (0);
} 
