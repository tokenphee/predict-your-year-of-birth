#include <stdio.h>
int main(){
	int age, yrn, ybd;
	printf("Enter your age:");
	scanf("%d", &age);
	printf("The current year is:");
	scanf("%d", &yrn);
	ybd=yrn-age;
	printf("Your year of birth is: %d", ybd);
	return 0;
}
