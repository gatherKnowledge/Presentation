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

#include <stdio.h>
#include <math.h>

void downCasting() ;
void upCasting() ;
void upCastCheck() ;

int main(void){
    downCasting() ;
    return 0 ;
}
void upCastCheck(){

    unsigned int before_value ;
    unsigned short tobe_value ;

    //unsigned
    if (( before_value >= (2^(sizeof(tobe_value)*8)-1))){
        //error 출력
        printf("ERROR") ;
    }
    else{
        tobe_value = (unsigned short)before_value ;
    }

}
void downCasting(){

    short before1 ;
    int after1 ;
    short before2 ;
    int after2 ;

    before1 = 1 ;
    printf("before1 : %8x \n", before1) ;
    after1 = before1 ;
    printf("after1 : %8x \n", after1) ;

    before2 = -1 ;
    printf("before2 : %8x \n", before2) ;
    after2 = before2 ;
    printf("after2 : %8x \n", after2) ;

    return ;
}
//Saturation code

if ( before >= 32768 ){
    after = 32767 ;
}else if( before < -32768 ){
    after = -32768 ;
}


void upCasting(){

    short after1;
    int before1 ;
    short after2 ;
    int before2 ;

    before1 = 0x7FFFFFFF ; // 2147483647
    printf("before1 : >%x \n", before1) ;
    after1 = before1 ;
    printf("after1  : >%x \n", after1) ;

    before2 = 0x80000000 ; //-2147483648
    printf("before2 : >%x \n", before2) ;
    after2 = before2 ;
    printf("after2  : >%x \n", after2) ;



    return ;
}
