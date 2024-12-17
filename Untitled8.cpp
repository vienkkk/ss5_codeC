#include <stdio.h>

int main() {
	int a, b,c,d,e;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	while(b>0) {
		d=a*b;
		while (b>0) {
		c=b;
		b = a % b;
		a=c;
	}
	}
	e=d/a; 
	printf("boi chung : %d\n", e);

	return 0;
}

