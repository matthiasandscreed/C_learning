#include<unistd.h>
#include<stdio.h>
#include<string.h>

char *ft_strlowcase(char *str)
{
  int i;
  i = 0;
  while(str[i])
    {
      if ((str[i] >= 'A') && (str[i] <= 'Z'))
	str[i] = str [i] + 32;
      i++;
    }
  return (str);
}

int main()
{
  char str[13] = "ALLAHWAKBAR";
  
  ft_strlowcase(str);
  printf("%s\n",str);
}
