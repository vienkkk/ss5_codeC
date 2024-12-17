#include <stdio.h>

int main (){
	int a,i,c ;
	printf("nhap vao mot so");
	scanf("%d", &a);
	if(0<a<10){
		printf("nhap lai"); 
		return 0; 
	} 
	for(i=1;i<=10;i++){
		c=a*i;
		printf("%d * %d = %d\n", i,a,c); 
	} 
	return 0; 
} 
