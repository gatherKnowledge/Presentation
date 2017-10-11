#include <stdio.h>

void toBin(int) ;
void tokkenizer(int) ;


int main()
{
    tokkenizer(1) ;
    return 0;
}
void tokkenizer(int n){
    int i ;
    int arr[20] = {0,} ;
    char r[20] =  {0,} ;
    i = 0 ;
    if( n == 0 ){
        printf("0000") ;
        return ;
    }
    while ( n/10 != 0 || n % 10 != 0)
    {
        arr[i] = n % 10 ;
        n = n / 10 ;
        i ++ ;
    }
    n = i ;
    while( i >=  0 )
    {
        r[n-i] = arr[i-1] ;
        i-- ;
    }

    for(int j = 0 ; j < n ; j++ )
    {
        toBin((int)r[j]) ;
        if ( j != n - 1 ){
            printf("_") ;
        }

    }

}
void toBin(int n){
    int i ;
    int arr[4] = {0,} ;
    char r[4] =  {0,} ;
    i = 0 ;

    while ( n/2 != 0 || n % 2 != 0)
    {
        arr[i] = n % 2 ;
        n = n / 2 ;
        i ++ ;
    }

    i = 3 ;
    while( i >=  0 )
    {
        r[3-i] = arr[i] ;
        i-- ;
    }

    for(int j = 0 ; j < 4 ; j++ )
    {
        printf("%d", r[j]) ;
    }
}
