#include<stdio.h>
#include<string.h>
int main()
{char input[100];
int i;
printf("enter the input :");
fgets(input,sizeof input,stdin);
for(i=0;input[i]!=0;i++){
	if(input[i]==' '){
		printf("\n");
	}
	else{
		printf("%c",input[i]);
	}
}
	
	
return 0;	
}
