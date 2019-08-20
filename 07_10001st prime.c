#include<stdio.h>

int main(void){
	int a=3,b=0,c=0,d,e=10001;
	e = e-2;
	for(;c<=e;a++){
		b = a -1;
		for(;b>=2;b--){
			if(a%b==0){
				break;
			}else{
				if(b == 2){
					c++;
					printf("t%d %d\n",a,c );
				}
			}
		}
	}

	printf("%d\n",a -1 );
	return 0;
}