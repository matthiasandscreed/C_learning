#include<unistd.h>
#include<stdio.h>
#include<string.h>

char *ft_strcapitalize(char *str)
{
  int i;
  
  for(i = 0; str[i]; i++)
    {
      if((i == 0 && str[i] >= 'a' && str[i] <= 'z') || (str[i - 1] == ' ' && str [i] >= 'a' && str[i] <= 'z'))
	{
	  str[i] = str[i] - 'a' + 'A';
	}
      else if ((str[i - 1] != ' ' && str[i] != ' '&& i != 0) && (str[i] >= 'A' && str[i] <= 'Z'))
	{
	  str[i] = str[i] -'A' + 'a';
	}
    }
  return(str);
}

int main()
{
  char str[16] = "aallahwakbar";
  
  ft_strcapitalize(str);
  printf("%s\n",str);
}
