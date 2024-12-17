#include <stdio.h>

int main() {
	int a, b,c;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);

	while (b>0) {
		c=b; 
		b = a % b;
		a=c; 
		
	}
	printf("uoc là: %d\n", a);

	return 0;
}

