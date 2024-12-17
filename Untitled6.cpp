#include <stdio.h>
#include <math.h>

int main() {
	int a,b,n,c;
	while(true) {
		printf("CALCULATOR \n" );
		printf("1.Tong 2 so\n");
		printf("2.Hieu 2 so\n");
		printf("3.Tich 2 so\n");
		printf("4.Thuong 2 so \n");
		printf("5.Thoat\n") ;
		printf("Lua chon cua ban\n ");
		scanf("%d",&n);
		switch(n) {
			case 1:

				printf("nhap a\n");
				scanf("%d", &a);
				printf("nhap b\n");
				scanf("%d", &b);
				c=a+b;
				printf("%d\n", c);
				break;
			case 2:
				printf("nhap a\n");
				scanf("%d", &a);
				printf("nhap b\n");
				scanf("%d", &b);
				c=a-b;
				printf("%d\n", c);
				break;
			case 3:

				printf("nhap a\n");
				scanf("%d", &a);
				printf("nhap b\n");
				scanf("%d", &b);
				c=a*b;
				printf("%d\n", c);
				break;
			case 4:

				printf("nhap a\n");
				scanf("%d", &a);
				printf("nhap b\n");
				scanf("%d", &b);
				c=a/b;
				printf("%d\n", c);
				break;
			case 5:
				printf("thoat chuong trinh");
				return 0;
			default:
				printf("lua chon cua ban sai");
				return 0;
		}
	}
	return 0;
}
