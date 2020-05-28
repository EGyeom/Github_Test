#include <stdio.h>
#include <stdlib.h>


int main(){

	char* buf;
	int count = 1;
	scanf("%d", &count);
	char*	str = "hello world!";	
	for(int i=1 ; i <= count; i++){
	
		sprintf(buf,"%s -> %d",str,i);
		printf("%s\n",buf);
	}



}
