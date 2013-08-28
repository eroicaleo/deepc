#include <stdio.h>

int main(int argc, char **argv) {
	
	char c = 'c';
	char *cp = &c;
	char **cpp = &cp;
	char ***cppp = &cpp;
	const char *const_cp = cp;
	const char **const_cpp = cpp;
	const char ***const_cppp = cppp;
	const_cp = NULL;
	// *const_cp = 'b';
	return 0;
}
