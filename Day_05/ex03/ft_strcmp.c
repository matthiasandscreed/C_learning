#include<unistd.h>
#include<stdio.h>
#include<string.h>

int ft_strcmp(char *s1, char *s2) //La fonction strcmp() compare les deux chaînes s1 et s2. Elle renvoie un entier négatif, nul, ou positif, si s1 est respectivement inférieure, égale ou supérieure à s2.
{
  int i;

  i = 0 ;
  while (s1[i] || s2[i])
    {
      if (s1[i] < s2[i])
	return (-1);
      if (s1[i]    > s2[i])
	return (1);
      i++;
    }
  return(0); 
}

int main()
{
  char s1[15] = "allah wakbar";
  char s2[15] = "wakbar";
  int ret;

  ft_strcmp(s1,s2);
  printf("\n");

  return(0);
}
