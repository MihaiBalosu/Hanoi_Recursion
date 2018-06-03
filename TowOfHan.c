#include "TowOfHan.h"

void towerOfHanoi( int n, char from_rod, char aux_rod, char to_rod )
{
    if( n == 1 )
    {
        printf( "\nThe disk 1 will be move from plate %c to %c " , from_rod , to_rod );
        return;
    }

    towerOfHanoi( n - 1 , from_rod , to_rod , aux_rod );
    printf( "\nThe slice %d will be move from plate %c to %c " , n  , from_rod , to_rod );

    towerOfHanoi( n - 1 , aux_rod , from_rod , to_rod );
}
