#include<stdio.h>

int main(void){
	int a=11,b=20;
	//printf("%d\n",a);
	for(a;a!=0;a++){
		//printf("%d",a);
		for(b;b>=1;b--){
			printf("%d/%d\n",a,b);
			if(a % b !=0){
				b=20;
				break;
			}
		}
		if(b==1){
			printf("end %d,%d\n",a,b);
			break;
		}
	}
	/* code */
	return 0;
}
