#include<stdio.h>
int main(){
	int i,amount,count;
	int notes[]={500, 200, 100, 50, 20, 10, 5, 2, 1};
	
	printf("enter the amount:");
	scanf("%d",&amount);
	
	printf("Minimum number of notes:\n");
	for(i=0;i<9;i++){
		count=amount/notes[i];
		if(count>0){
			printf("%d x %d\n",notes[i],count);
			amount=amount%notes[i];
		}
	}
	
	
	
	
	
	
	return 0;
}
