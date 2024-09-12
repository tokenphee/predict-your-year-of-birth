#include <stdio.h>
int main(){
	long long age, yrn, ybd;
	printf("Enter your age:");
	scanf("%lld", &age);
	printf("The current year is:");
	scanf("%lld", &yrn);
	ybd=yrn-age;
	printf("Your year of birth is: %lld", ybd);
	return 0;
}
