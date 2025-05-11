#include<stdio.h>
int main(){
	int arr[100],n,i,k,j;
	printf("enter the number of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n the array is:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nenter the value for k:");
	scanf("%d",&k);
	 for (i=0;i<n-1;i++){
	 	for(j=0;j<n-1-i;j++){
	 		if(arr[j]>arr[j+1]){
	 			int temp=arr[j];
	 			arr[j]=arr[j+1];
	 			arr[j+1]=temp;
			 }
		 }
	 	
	 }
	 printf("\nthe sorted array is ");
	 for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	 if(k>0&&k<=n){
	 printf("\nThe %dth smallest element is: %d\n", k, arr[k-1]);}
    else{
	
        printf("\nInvalid k. It should be between 1 and %d.\n", n);}

    return 0;
}
	

