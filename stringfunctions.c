#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//function to calculate string length

int stringLength(char string[])
  {
    int length = 0, i;
    for(i = 0; string[i] != '\0'; i++)
      {
        length++;
      }
    return length;
  }

  //function to concatenate two strings

  void joinStrings(char string1[], char string2[])
    {
      int i, length1, length2;
      length1 = stringLength(string1);
      length2 = stringLength(string2);
      for(i = length1; i < length1 + length2; i++)
        {
          string1[i] = string2[i - length1];
        }
      string1[i] = '\0'; // adding null charecter at end of input
    }

    //function to compare 2 strings

  int compareStrings(char string1[], char string2[])
      {
       int length1, length2, i, count = 0;
       length1 = stringLength(string1);
       length2 = stringLength(string2);
       if(length1 != length2)
       return 1;
       for(i = 0; i < length1; i++)
         {
           if(string1[i] ==  string2[i])
           count++;
         }
       if(count == length1)
       return 0;
       else
       return 1;
      }

      //function to copy string

   int copyString(char destination[], char source[])
       {
         int length, i;
         length = stringLength(source);
         for(i = 0; i < length ;i++)
           {
            destination[i] = source[i];
           }
         destination[i] = '\0';
       }

    //main function




int main()
  {
 char string1[20], string2[20], ch; //string variables declaration with size 20
 int choice;
 while(1)
   {
     printf("\n1. Find Length \n 2. Concatenate \n 3. Compare \n 4. Copy \n 5. occurance \n 6. exit \n");
     printf("Enter your choice: ");
     scanf("%d", &choice);
     switch(choice)
     {

      case 1:
      printf("Enter the string: ");
      scanf("%s", string1);
      printf("The length of string is %d", stringLength(string1));
      break;

      case 2:
      printf("Enter two strings: ");
      scanf("%s%s",string1, string2);
      joinStrings(string1, string2);
      printf("The concatenated string is %s", string1);
      break;

      case 3:
      printf("Enter two strings: ");
      scanf("%s%s", string1, string2);
      if(compareStrings(string1, string2) == 0)
        printf("They are equal");
      else
        printf("They are not equal");
      break;

      case 4:
      printf("Enter a string: ");
      scanf("%s", string1);
      printf("String1 = %s\n", string1);
      printf("After copying string1 to string 2\n");
      copyString(string2, string1);
      printf("String2 = %s", string2);
      break;

      case 5:
      printf("Enter a string: ");
      scanf("%s", string1);
      printf("String1 = %s\n", string1);
      printf("\n enter ch");
      scanf("%c",&ch);
      string2 = memchr(string1, ch, stringLength(string1));
      printf("string after |%c| is |%s|\n",ch, string2);
      break;
      
      case 6:
      exit(0);
    }
  }
  return 0;
  }
