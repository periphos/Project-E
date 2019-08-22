#include<stdio.h>

int main(void){
	int a=0,b=0;
	long s=0;
	for(int c =1;c<=2000000;c++){
		a++;
		//printf("a %d\n",a );
		b = a - 1;
		for(b;b>0;b--){
			if(a%2 == 0 && a>3){
				break;
			}
			//printf("b %d\n",b );
			if(a%b == 0 && b==1){
				printf("%d\n",a );
				s += a;
				break;
			}
			if(a%b==0 && b!=1){
				break;
			}
		}

	}
	printf("%ld\n",s );
	return 0;
}