/*
 ============================================================================
 Name        : CS2650_Lecture6_Code3.c
 Author      : Robert Delfin
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main( ) {
   char str[100];       //char array STRING used as buffer
   printf( "Enter a value :");
   fflush(stdout);  //ECLIPSE BUG
   gets( str );
   printf( "\nYou entered: ");
   puts( str );
   return 0;
}
