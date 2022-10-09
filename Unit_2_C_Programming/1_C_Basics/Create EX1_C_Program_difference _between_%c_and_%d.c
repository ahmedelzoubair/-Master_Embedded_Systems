
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char x= ' ';
	printf("a%cb\n",x ); //a b
	printf("a%db",x);    // a(space number at the ASCII)b

	char x= 47;
	printf("a%cb \n",x ); //a/b 
	printf("a%db",x);     //a47b

	int x;
	printf("plz enter numb between 32 to 127 to get character is ASCII \n");
	fflush(stdout);
	scanf("%d",&x);
	printf("the result = %c",x);
