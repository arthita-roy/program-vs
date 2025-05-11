#include<stdio.h>
int main(){
	int arr[100],i,n;
	printf ("enter the number of element in  array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("the array is:");
		for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nthe even elements in array is:");
		for(i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("\n value: %d at position: %d.",arr[i],i);
		}
		
	}
		printf("\nthe odd elements in array is:");
		for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			printf("\n value: %d at position: %d.",arr[i],i);
		}
		
	}
	 
	 int duplicate=0,j;
	 printf("\narray after removing duplicates:");
	 for(i=0;i<n;i++){
	 	duplicate=0;
	 	for(j=0;j<i;j++){
	 		if(arr[i]==arr[j]){
	 			duplicate=1;
	 			break;
			 }
		 }
		 if(duplicate==0){
		 	printf("%d ",arr[i]);
		 }
	 }
	
	
	
	
	
	
	return 0;
}
