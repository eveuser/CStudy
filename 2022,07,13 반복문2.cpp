#include <stdio.h>
main(){
	int i=1 ,sum=0 ;
	
	while(i<=10){
		sum = sum + i;
		i++;
	} 
	printf("1부터 10 까지의 (i) 값 합 : %d", sum);
}
