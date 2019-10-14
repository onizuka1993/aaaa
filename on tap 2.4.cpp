#include<stdio.h>
int main(){
	int n;
	printf("nhap vao mot so  \n");
	scanf("%d", &n);
	int s = 0;
	for (int i = 1; i < n; i++){
	

	if (n%i == 0)
		s += i;
	}
	if (s == n){
	
		printf("%d la so hoan hao", n);
	}
	else{
	
		printf("%d khong phai la so hoan hao", n);
}
}
