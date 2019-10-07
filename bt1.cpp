#include <stdio.h>
 
int main(){
	int x,y;
	printf("nhap vao 2 so = \n");
	scanf("%d%d" , &x, &y);
	if (x>y){
		printf (" so lon hon la %d \n ", x);		
	}
	else if (x<y) {
		printf(" so lon hon la %d \n", y);
	}
	else {
		printf(" hai so bang nhau \n");
	}
}
