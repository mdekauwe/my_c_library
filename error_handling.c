#include "error_handling.h"


void check_errors(const char *reason, const unsigned int line)
{
	fprintf(stderr, "%s, failed at line: %d\n", reason, line);
	fflush(stderr);
	exit(1);
	
	return;
}
