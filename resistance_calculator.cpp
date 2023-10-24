#include <stdio.h>

int main(){
	int sn, pn;
	float sr, pr;
	float stotal = 0;
	float ptotal = 0;
	float total = 0;
	
	printf("Enter the no. of Series Resistance: ");
	scanf("%d", &sn);
	printf("Enter the no. of Parallel Resistance: ");
	scanf("%d", &pn);
	
	for(int i = 0; i < sn; i++){
		printf("Series Resistance %d: ", i + 1);
		scanf("%f", &sr);
		stotal += sr;
	}
	
	for(int j = 0; j < pn; j++){
		printf("Parallel Resistance %d: ", j + 1);
		scanf("%f", &pr);
		ptotal += 1 / pr;
	}
	
	total = stotal + 1 / ptotal;
	
	printf("\nTotal Series Resistance: %f ohm", stotal);
	printf("\nTotal Parallel Resistance: %f ohm", 1 / ptotal);
	printf("\nTotal Resistance: %f ohm", total);
	
	return 0;
}
