#include<stdio.h>

int main(void){
	unsigned long long a=0,b=0,c=0,d=600851475143,f=0;
	for(a;a<d;a++){

		b++;
		unsigned long long e = b - 1;

		while(e >= 1){

			c = b % e;

			if(c==0 && b != 2){
				break;
			}else{
				if(e>2){
					e--;
				}else{
					printf("*****%lld\n",b);
					if(d % b == 0){
						d = d/b;
						printf("%lld,%lld\n",b,d);
						b = 1;


					}

					break;
				}
			}
		}
	}
	return 0;
}