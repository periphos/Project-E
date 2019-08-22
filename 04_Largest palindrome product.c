#include<stdio.h>

int main(void){
	int a=1000,b=1000,i=0,j=0,c;
	for(i;i<100;i++){
		a--;
		for(j;j<100;j++){
			b--;
			c = a * b;
			printf("%d*%d=%d  ",a,b,c );
			if(j == 5){
				//printf("\n");
			}

		}
		printf("\n\n");
		j = 0;
		b = 1000;

	}
	return 0;
}