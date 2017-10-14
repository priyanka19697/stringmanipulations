/*#include<stdio.h>
#include<string.h>

int main()
{
  char string[50] = "fhsfjdfnvjdn-cfadsfjdk-fkdsjkv";
  const char *delimiter = "-";
  char *token; //it should work kada remember these string funs

  //get the first token

  token = strtok(string,delimiter);

  while(token != NULL)
  {
      printf("%s \n",token);
      token = strtok(NULL, delimiter);
  }

  return 0;
}
*/



#include <string.h>
#include <stdio.h>

int main()
{
   char str[80] = "This is - www.tutorialspoint.com - website";
   const char s[2] = "-";
   char *token;

   // get the first token
  token = strtok(str, s);

   //walk through other tokens
   while( token != NULL )
   {
      printf( " %s\n", token );

      token = strtok(NULL, s);
   }

   //return(0);
}
