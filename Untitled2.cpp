#include <stdio.h>

int main() {
	int a,b;
	b=3;
	printf("nhap vao mot so ");
		scanf("%d", &a);
	while(a>0) {	

		if(a==b) {
			printf("nhap dung \n");
			break;
		} else {
			printf("nhap lai ");
		}
	}
	return 0;
}
