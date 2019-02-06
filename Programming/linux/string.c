#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void fun (char *p, char *ch);
int
main ()
{

  char str[100], str1[50];
//str[]="abccdef";
// str1[]="bc";
  printf ("enter string:");
  scanf ("%s", str);

  printf ("enter char:");
  scanf ("%s", str1);

  fun (str, str1);



  printf ("%s", str);

  return 0;
}

void fun (char *p, char *ch)
{

  while (*p)
    {
   if (*p == *ch)
	{
	  strcpy (p, p + 1);
	  if(*p!= *ch)
	  {
        ch++;
	  }
	  else
	  {
	   strcpy (p, p + 1);
	   ch++;
	  }

	}
      p++;

    }



}
// in python remove 'ce'
strr="abccdef"
strr=strr.replace('c','')
print(strr.replace('e','')
