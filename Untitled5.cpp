#include <stdio.h>

int main (){
	int a,i,c ;
	a=1;
	while(a<9){
	a++; 
	for(i=1;i<=10;i++){
		c=a*i;
		printf("%d * %d = %d\n", i,a,c); 
	} 
}
	return 0; 
} 
