#include <stdio.h>
int main(){
      int n,i;
      float s;
      printf("\nNhap n: ");
      scanf("%d", &n);
      for(i=1; i<=n; i++){
           
            s=s+1.0/i;
      }
      printf("S = %f\n", s);
      
      
}
