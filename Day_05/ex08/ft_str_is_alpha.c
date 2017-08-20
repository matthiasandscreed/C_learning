#include<unistd.h>
#include<stdio.h>
#include<string.h>

int ft_str_is_alpha(char *str)
{
  int i;
  
  for(i = 0; str[i]; i++)
    {
      if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >='A' && str[i] <= 'Z')))
	 return (0);
     }
  return (1);
 }

 int main()
 {
   char str[16] = "1a2llahwakbar";
   printf("%d\n",ft_str_is_alpha(str));
 
   char str2[16] = "azeetryuyi0"; 
   printf("%d\n",ft_str_is_alpha(str2));

   char str3[16] = "AZERTY"; 
   printf("%d\n",ft_str_is_alpha(str3));
   return(0);
 }
