#include<stdio.h>
int main(void){

test:
	printf("test");
	goto test;
	return 0;
}
