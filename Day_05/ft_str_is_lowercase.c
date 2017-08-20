#include<unistd.h>
#include<stdio.h>
#include<string.h>


int ft_str_is_lowercase(char *str)
{
  int i;
  
  for(i = 0; str[i]; i++)
    {
      if(!(str[i] >= 'a' && str[i] <= 'z'))
	return (0);
    }
  return (1);
}

int main()
{
  char str[16] = "allahwakbar";
  printf("%d\n",ft_str_is_alpha(str));
  return(0);
}
