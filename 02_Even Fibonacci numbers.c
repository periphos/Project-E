#include<stdio.h>

int main(void){
	unsigned long long a = 1, b = 2,c = 0,s = 2;
	while(c <= 4000000){

		c = a + b;
		if(c % 2 == 0){
			s += c;
		}
		a = b;
		b = c;
		printf("%lld\n",c);

	}
	printf("s = %lld",s);
	return 0;
}