#include<stdio.h>
int main(){
	float a,b,c;
	float perimeter;
	printf("enter the three sides of a triangle:");
	scanf("%f%f%f",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a)){
		 printf("The values form a valid triangle.\n");
		 perimeter=a+b+c;
        printf("Perimeter of the triangle = %f\n", perimeter);
		
	}
	else{
		printf("The values do not form a valid triangle.\n");
	}
	
	
	
	
	
	return 0;
}
