#include<stdio.h>
int main(){
	char operator;
	float a,b;
	float result;
	scanf("%c",&operator);
	scanf("%f",&a);
	scanf("%f",&b);
	switch(operator){
		case('+'):
			result=a+b;
			printf("%.2f + %.2f = %.2f",a,b,result);
			break;
		case('-'):
			result=a-b;
			printf("%.2f - %.2f = %.2f",a,b,result);
			break;
		case('*'):
			result=a*b;
			printf("%.2f * %.2f = %.2f",a,b,result);
			break;
		case('/'):
			if(b==0){
				printf("Division by 0 is not possible.");
			}
			else{
			result=a/b;
			printf("%.2f / %.2f = %.2f",a,b,result);
			
			}
			break;
			
		default:
			printf("Invalid operator!");
	
	}
}
