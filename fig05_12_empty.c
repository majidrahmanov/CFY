/*    A scoping example */
#include <stdio.h>

void useLocal( void );       /* function prototype */
void useStaticLocal( void ); 
void useGlobal( void );      

int x = 1; /* ??? variable */

int main( void )
{  int x = 5; /* ???? variable to main */
   printf("???? x in outer scope of main is %d\n", x );

   { /* start new ???? */
      int x = 7; /* ???? variable to new ???? */
      printf( "???? x in inner scope of main is %d\n", x );
   } /* end new ???? */

   printf( "???? x in outer scope of main is %d\n", x );

   useLocal();     /* ??? */
   useStaticLocal(); /* ??? */
   useGlobal();      /* ?? */
   useLocal();       /* ??? x */
   useStaticLocal(); /* ??? */
   useGlobal();      /* ??? */

   printf( "\n ???? x in main is %d\n", x );
   return 0; }

/* ?????? varincliable x during each call */
void useLocal( void )
{  int x = 25;  /* ???? each time useLocal is called */
   printf( "\n ???? x in useLocal is %d after entering useLocal\n", x );
   x++;
   printf( " ????? x in useLocal is %d before exiting useLocal\n", x );
}

/* ??? */
void useStaticLocal( void )
{  static int x = 50;  
   printf( "\n ??? ???? x is %d on entering useStaticLocal\n", x );
   x++;
   printf( "??? ???? x is %d on exiting useStaticLocal\n", x );
}

void useGlobal( void )
{  printf( "\n ??? x is %d on entering useGlobal\n", x );
   x *= 10;
   printf( " ??? x is %d on exiting useGlobal\n", x );
}
