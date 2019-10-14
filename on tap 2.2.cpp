#include <stdio.h>
int main(){
    int i, n;
    int s = 1;
 
    printf("nhap vao n = \n");
    scanf("%d", &n);
 
    for(i = 1; i <= n; i++) 
    {
        s = s * i;
    }
 
    printf("%d! = %d\n", n, s);
 
   
}
