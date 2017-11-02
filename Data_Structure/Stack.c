#include <stdio.h>
#define MAXSIZE 10 


void create(int arr[]){
	int i = 0 ;
	while(i < sizeof(arr) / 4 ){

		arr[i] = 0 ;
		printf("value : %d", i) ; 
		i++ ;
		//printf("true or false  : %d", sizeof(arr) / 4 ) ; 
	}

}

void printArray(int arr[]){
	int i ; 
	for(i = 0 ; i < sizeof(arr)/4 ; i++){
		printf("%d - " , arr[i]) ; 
	}
}

int main(){
	int arr[MAXSIZE] = {0};
	create(&arr[0]) ;
	printArray(&arr[0]) ; 
	return 0 ;
}

