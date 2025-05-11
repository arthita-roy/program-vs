#include<stdio.h>
int fibbo(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	else{
		return fibbo(n-1)+fibbo(n-2);
	}
}


int main(){
	  int n,i;
	  printf("enter the the number for fibbonacci:");
	  scanf("%d",&n);
	  printf("display the fibonacci series:");
	  for (i=0;i<n;i++){
	  	printf("%d ",fibbo(i));
	  }
	  return 0;
}
