/* Fig. 5.7: fig05_07.c
   Shifted, scaled integers produced by 1 + rand() % 6 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{  int i; 
   for ( i = 1; i <= 20; i++ ) {
      /* pick random number from 1 to 6 and output it */
      printf( "%10d", 1 + ( rand() % 6 ) );

      /* What is this if doing ?*/
      if ( i % 5 == 0 ) {
         printf( "\n" );
      }

   }
   return 0;
}