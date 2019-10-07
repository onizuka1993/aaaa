#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	float y;
	printf ("nhap 3 so a ,b,c \n");
	scanf("%f%f%f",&a,&b,&c);
	
	y = b*b+4*a*c;

	if (y<0){
		printf("phuong trinh vo nghiem\n");
	}
	else if (y==0){
		float x=-b/(2*a);
		printf(" phuong trinh co 1 nghiem x= %f, x");
		
	}
	else{
		float x1 = (-b+sqrt(y))/(2*a);
		float x2= (-b-sqrt(y))/(2*a);	
		printf(" phuong trinh co 2 nghiem x1 = %f ,x2 = %f\n", x1  ,x2);
	}
}

