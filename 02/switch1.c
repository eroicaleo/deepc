#include <stdio.h>

int main() {
	
	int i = 8;
	switch (i) {
		case 5 + 3 : do_again:
		case 2 : printf("loop unremittingly\n"); goto do_again;
		case 3 : ;
		default : i++;
	}
	return 0;
}
