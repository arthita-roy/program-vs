#include<stdio.h>
int main(){
	  int n,isprime=1,i;
	  printf("enter the the number for prime:");
	  scanf("%d",&n);
	  for(i=2;i<=n/2;i++){
	  	if(n%i==0)
	  	{
	  		isprime=0;
	  		break;
		  }
	  }
	  if(isprime==1){
	  		printf("%d is a  prime number.\n", n);	
}
else{
	 printf("%d isnot  a prime number.\n", n);
}

		return 0;
}
	  	
	  
	  
