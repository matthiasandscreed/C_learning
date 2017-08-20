#include<unistd.h>
#include<stdio.h>
#include<string.h>

char *ft_strupcase(char *str) //une fonction qui met en majuscule chaque lettre de chaque mot.
{
  int i;

  i = 0;
  while(str[i])
    {
      if ((str[i] >= 'a') && (str[i] <= 'z'))
	str [i] = str[i] - 32;
      i++;
    }
  return (str);
}
 
int main()
{
  char str[13] = "allahwakbar";
  
  ft_strupcase(str);
  printf("%s\n",str);
}
