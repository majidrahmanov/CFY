/* Fig. 5.9: fig05_09.c
   Randomizing die-rolling program */
#include <stdlib.h>
#include <stdio.h>
int main( void )
{  int i;      
   unsigned a; /* number used to seed random number generator */
   printf( "Enter seed: " );
   scanf( "%u", &a ); /* note %u for unsigned */
   srand(a); /* seed random number generator */
   
   for ( i = 1; i <= 10; i++ ) {
      printf( "%10d", 1 + ( rand() % 6 ) );
      
      if ( i % 5 == 0 ) {
         printf( "\n" );
      }
   } 
   return 0;
   }
