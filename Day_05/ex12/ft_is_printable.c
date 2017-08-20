#include<include.h>
#include<stdio.h>
#include<string.h>

int ft_str_is_printable(char *str)
{
  int i;
  for(i = 0; str[i]; i++)
    {
      if(!(str[i] >= 32 && str[i] <= 126))
	return(0);
    }
  return(1);
}

