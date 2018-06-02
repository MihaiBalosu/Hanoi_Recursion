#include <stdio.h>
#include <stdlib.h>
#include "TowOfHan.h"
#include "Rand_Gen.h"

int n;

int main()
{   time_t t;

    srand((unsigned) time(&t));

    printf( "Enter the number of the disks: \n" );

    n = rand() % 10 ;

    printf("%d", n);

    towerOfHanoi( n , 'A' , 'B' , 'C' );
    return 0;
}

