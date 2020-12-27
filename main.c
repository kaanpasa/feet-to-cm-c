#include<stdio.h>

int main(){
	
	float length, lastLength;
	char unit;
	printf("Please enter the length with unit(F for Feet C for Centimeter):");
	scanf("%f %c", &length ,&unit);
	if(unit=='f' || unit=='F'){
		lastLength=length*30.48;
		printf("%.2f ft is equal to %.2f cm", length, lastLength);
	}
	else if(unit=='c' || unit=='C'){
		lastLength=length/30.48;
		printf("%.2f cm is equal to %.2f ft", length, lastLength);
	}
	else
		printf("Invalid Unit");
	return 0;
}
