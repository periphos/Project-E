#include<stdio.h>

int main(void){
	int a = 999;
	int s = 0;
	while(a>0){
		if(a % 5 == 0){
			s += a;
			printf("%d,%d\n",s,a);
		}
		if(a % 3 == 0){
			s += a;
			printf("%d,%d\n",s,a);
		}
		if(a % 15 == 0){
			s -= a;
			printf("%d,%d\n",s,a);
		}

		a--;
	}
	printf("%d\n",s);

	return 0;
}