#include<stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("nhap 3 so bat ky =");
	scanf("%d%d%d" , &a, &b ,&c);	
	if (a+b>c&&a+c>b&&b+c>a)
	{	printf("la do dai 3 canh cua tam giac\n");
		int p= a+b+c;
		printf("chu vi cua tam giac = %d\n",p);
		float x=(float) p/2;
		float t=x*(x-a)*(x-b)*(x-c);
		float s=sqrt (t);
		printf("dien tich cua tam giac = %f\n", s);
			
	}
	else{printf("khong phai do dai 3 canh cua tam giac");
	}
}
