#include<stdio.h>
int main(){
	  int n,a=0,b=1,c,i;
	  printf("enter the the number for fibbonacci:");
	  scanf("%d",&n);
	  printf("display the fibonacci series:");
	  for (i=0;i<n;i++){
	  	printf("%d ",a);
	  	c=a+b;
	  	a=b;
	  	b=c;
	  }
	  return 0;
}
