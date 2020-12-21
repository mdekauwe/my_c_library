#include "stdio.h"
#include "stdlib.h"

FILE *open_file(const char *filename, const char *mode, const unsigned int line)
{	
	FILE *ptr = NULL;
	if ((ptr = fopen(filename, mode)) == NULL) {
		fprintf(stderr, "%s\n", "ERROR");
	}
	return (ptr);
}

int main()
{
	FILE *infile_fp;
	
	infile_fp = open_file("/users/eow/mgdk/DATA/almip_rainfall/Forcing_AMMA_0.5_mrg_2006_Rainf.gra", "rb", __LINE__);
	
 return(0);
}
