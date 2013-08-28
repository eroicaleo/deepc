#include <stdio.h>

int main(int argc, char **argv) {
	long double ld = 0.0;
	printf("The size of long double is %ld\n", sizeof(ld));
	long lint = 0;
	printf("The size of long is %ld\n", sizeof(lint));
	double d = 0.0;
	printf("The size of double is %ld\n", sizeof(d));
	return 0;
}
