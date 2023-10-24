#include <stdio.h>

int main(){
	int choice;
	float sum, diff, prod, div;
	float num1, num2;
	
	printf("1 => Addition\n2 => Subtraction\n3 => Multiplication\n4 => Division\nEnter your choice: ");
	scanf("%d", &choice);
	
	printf("Enter the first number: ");
	scanf("%f", &num1);
	printf("Enter the second number: ");
	scanf("%f", &num2);
		
	if(choice == 1){
		sum = num1 + num2;
		printf("Sum: %f", sum);
	} else if(choice == 2){
		diff = num1 - num2;
		printf("Difference: %f", diff);
	} else if(choice == 3){
		prod = num1 * num2;
		printf("Product: %f", prod);
	} else if(choice == 4){
		div = num1 / num2;
		printf("Quotient: %f", div);
	} else{
		printf("Invalid choice");
	}
}
