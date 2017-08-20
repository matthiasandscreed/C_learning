#include<unistd.h>
#include<stdio.h>
#include<string.h>

int ft_str_is_uppercase(char *str)
{
  int i;
  for(i = 0; str[i]; i++)
    {
      if(!(str[i] >= 'A' && str[i] <= 'Z'))
	return(0);
    }
  return(1);
}

int main()
{
  char str[16] = "1ADSFSGffsgs";
  printf("%d\n",ft_str_is_uppercase(str));

  char str2[16] = "ALLAHWHAKBAR";
  printf("%d\n",ft_str_is_uppercase(str2));

  char str3[16] = "";
  printf("%d\n",ft_str_is_uppercase(str3));
  return(0);
}
