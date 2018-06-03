#include <stdio.h>
#include <stdlib.h>
#include "TowOfHan.h"
#include "Rand_Gen.h"

int n;

int main()
{   time_t t;

    srand((unsigned) time(&t));

    printf( "A is the bronze plate\n" );
    printf( "B is the silver plate\n" );
    printf( "C is the golden plate\n" );
    printf( "The number of the slices is: \n" );

    n = rand() % 10 ;

    printf("%d", n);

    towerOfHanoi( n , 'A' , 'B' , 'C' );
    return 0;
}

