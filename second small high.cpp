#include<stdio.h>
int main(){
	int n,i,val;
	int arr[100];
	printf("enter the number of array:");
	scanf("%d",&n);
	printf("%d elements of the array:",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("the array is:");
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
	int highest = arr[0];
    int lowest = arr[0];
    
    for(i=0;i<n;i++){
    	if(arr[i]>highest){
    		highest=arr[i];
		}
		if(arr[i]<lowest){
    		lowest=arr[i];
		}
	}
	printf("\nthe highest is: %d\n the lowest is:%d",highest,lowest);
	
	int secondH=lowest;
	int secondL=highest;
	
	 for(i=0;i<n;i++){
	 	if(arr[i]>secondH&&arr[i]<highest){
	 		secondH=arr[i];
		 }
	 if(arr[i]<secondL&&arr[i]>lowest){
	 		secondL=arr[i];
		 }
	}
	 if (secondH == lowest)
        printf("No second highest (all elements may be same).\n");
    else
        printf("\nSecond highest: %d\n", secondH);

    if (secondL == highest)
        printf("No second lowest (all elements may be same).\n");
    else
        printf("Second lowest: %d\n", secondL);
	
	return 0;
}
