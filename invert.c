#include <stdio.h>
 
int neg(int a){
	return 32000-a ;
}
int main(){
	int i=0;
	for(i=0;i<15;i++){
		printf("%d<<%d\n",i,neg(i));
	}
	return 0;
}