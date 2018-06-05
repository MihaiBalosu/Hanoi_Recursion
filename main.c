#include <stdio.h>
#include <stdlib.h>
#include "TowOfHan.h"


int n;

int main()
{   time_t t;

    srand((unsigned) time(&t));

    printf( "A is the bronze plate\n" );
    printf( "B is the silver plate\n" );
    printf( "C is the golden plate\n" );

    n = rand() % 15 ;

    printf( "The number of the slices is: \n" );
    printf("%d", n);

    towerOfHanoi( n , 'A' , 'B' , 'C' );
    return 0;
}

