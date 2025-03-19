#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void) {
	int n;
	srand(time(0));
	n= rand();
	if (n < 0){
		printf("%d is negative", n);
	}
	else if (n > 0){
		printf("%d is positive", n);
	}
	else
		print("%d is 0", n);
	return 0;

}
