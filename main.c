#include <stdio.h>
#include <stdlib.h>
#include "TowOfHan.h"
#include "Rand_Gen.h"

int n;

int main()
{
    printf( "Enter the number of the disks: \n" );
    n = rand_gen (argc, **argv);

    towerOfHanoi( n , 'A' , 'B' , 'C' );
    return 0;
}

