#include <stdio.h>
#include <string.h>

int main () {

   char stringOne[12] = "Programming";
   char stringTwo[12] = "Hero";
   char stringThree[12];
   int  len ;

   /* copy stringOne into stringThree */
   strcpy(stringThree, stringOne);
   printf("Copied value is: %s\n", stringThree );

   /* concatenates stringOne and stringTwo */
   strcat( stringOne,stringTwo);
   printf("Concatenation is: %s\n", stringOne);

   /* total lenghth of stringTwo */
   len = strlen(stringTwo);
   printf("Length of String Two is :  %d\n", len );

   return 0;
}