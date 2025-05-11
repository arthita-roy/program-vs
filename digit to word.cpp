#include<stdio.h>
int digittoword(int digit){
	switch(digit){
		case 0:printf("zero");
		break;
		case 1:printf("one");
		break;
		case 2:printf("two");
		break;
		case 3:printf("three");
		break;
		case 4:printf("four");
		break;
		case 5:printf("five");
		break;
		case 6:printf("six");
		break;
		case 7:printf("seven");
		break;
		case 8:printf("eight");
		break;
		case 9:printf("nine");
		break;
		
	}
}




int main(){
	int num,digit[4];
	printf("enter the number of four digit:");
		scanf("%d",&num);
		if(num<1000||num>9999){
			printf("invalid nmber!!");
			return 1;
		}
		digit[0]=num/1000;
		digit[1]=(num/100)%10;
		digit[2]=(num/10)%10;
		digit[3]=num%10;
		
		 printf("Number in words: ");
    for (int i = 0; i < 4; i++) {
        digittoword(digit[i]);
    }
    return 0;
}
