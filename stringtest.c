#include<stdio.h>
#include<string.h>

void main()
{
  char *string = "who cares if aaa one more light goes out aaa in the sky of a million aaa stars,aaa well i do if the star is you\0";

  char *breaker = "aaa";

  char *array[10];
  int i = 0 ;

  array[i] = string;
  i++;

  while(string!=NULL)
  {
    if(string == strstr(string, breaker))
    {
      array[i] = strstr(string, breaker);
      i++;
    }
    string = strstr(string,breaker) + strlen(breaker) + 1;
  }

  char *a, *b;

  a = array[1];
  b = array[2];

  while(a != b)
  {
    printf("%c",*a);
    a++;
  }
}
