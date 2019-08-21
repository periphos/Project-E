#include<stdio.h>

int main(void){
	int sa = 5050,sb = 0;
	for(int i = 1;i<=100;i++){
			sb += i*i;
		printf("%d\n",sb);
	}
	printf("%d\n",sb);
	sa = sa*sa;
	printf("%d\n",sa-sb );
	return 0;
}