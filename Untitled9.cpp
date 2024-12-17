#include <stdio.h>
#include <math.h>

int main() {
	int a,b,n,c,d;
	while(true) {
		printf("MENU \n" );
		printf("1.Nhap 3 so\n");
		printf("2.Tong 3 so\n");
		printf("3.Trung binh cong 3 so\n");
		printf("4.So nho nhat \n");
		printf("5.So lon nhat\n") ;
		printf("6.Thoat\n ");
		scanf("%d",&n);
		switch(n) {
			case 1:
				printf("nhap a\n");
				scanf("%d", &a);
				printf("nhap b\n");
				scanf("%d", &b);
				printf("nhap c\n");
				scanf("%d", &c);
				break;
			case 2:
				d=a+b+c;
				printf("%d\n", d);
				break;
			case 3:
				d=(a+b+c)/3;
				printf("%d\n", d);
				break;
			case 4:
				if(a<b) {
					d=a ;
				} else {
					d=b;
				}
				if(c<d) {
					d=c;
				}
				printf("%d\n", d);
				break;
			case 5:
				if(a>b) {
					d=a ;
				} else {
					d=b;
				}
				if(c>d) {
					d=c;
				}
				printf("%d\n", d);
				break;

			case 6: 
				printf("thoat chuong trinh");
				return 0; 
			default:
				printf("lua chon cua ban sai");
				return 0;
		}
	}
	return 0;
}
