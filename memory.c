#include "memory.h"


/* allocate memory to arrays */
void *allocate_memory_generic(int size, const unsigned int line)
{
	void *ptr = NULL;
	if (!(ptr = calloc((size + 1), sizeof(void)))) {
		check_errors("Error allocating enough memory for array", line);
	}
	return (ptr);
}


char *allocate_memory_char(int size, const unsigned int line)
{
	char *ptr = NULL;
	if (!(ptr = calloc((size + 1), sizeof(char)))) {
		check_errors("Error allocating enough memory for array", line);
	}
	return (ptr);
}


short *allocate_memory_short(int size, const unsigned int line)
{
	short *ptr = NULL;
	if (!(ptr = calloc((size + 1), sizeof(short)))) {
		check_errors("Error allocating enough memory for array", line);
	}
	return (ptr);
}


long *allocate_memory_long(int size, const unsigned int line)
{
	long *ptr = NULL;
	if (!(ptr = calloc((size + 1), sizeof(long)))) {
		check_errors("Error allocating enough memory for array", line);
	}
	return (ptr);
}


int *allocate_memory_int(int size, const unsigned int line)
{
	int *ptr = NULL;
	if (!(ptr = calloc((size + 1), sizeof(int)))) {
		check_errors("Error allocating enough memory for array", line);
	}
	return (ptr);
}


float *allocate_memory_float(int size, const unsigned int line)
{
	float *ptr = NULL;
	if (!(ptr = calloc((size + 1), sizeof(float)))) {
		check_errors("Error allocating enough memory for array", line);
	}
	return (ptr);
}

double *allocate_memory_double(int size, const unsigned int line)
{
	double *ptr = NULL;
	if (!(ptr = calloc((size + 1), sizeof(double)))) {
		check_errors("Error allocating enough memory for array", line);
	}
	return (ptr);
}

/* change amount of space alloacted for array */
char *reallocate_memory_char(char *array, int size, const unsigned int line)
{
	if (!(array = realloc(array, (size + 1) * sizeof(char)))) {
		check_errors("Error expanding memory allocation for array", line);
	}
	return (array);
}


int *reallocate_memory_int(int *array, int size, const unsigned int line)
{
	if (!(array = realloc(array, (size + 1) * sizeof(int)))) {
		check_errors("Error expanding memory allocation for array", line);	
	}
	return (array);
}

short *reallocate_memory_short(short *array, int size, const unsigned int line)
{
	if (!(array = realloc(array, (size + 1) * sizeof(short)))) {
		check_errors("Error expanding memory allocation for array", line);
	}
	return (array);
}


long *reallocate_memory_long(long *array, int size, const unsigned int line)
{
	if (!(array = realloc(array, (size + 1) * sizeof(long)))) {
		check_errors("Error expanding memory allocation for array", line);	
	}
	return (array);
}

float *reallocate_memory_float(float *array, int size, const unsigned int line)
{
	if (!(array = realloc(array, (size + 1) * sizeof(float)))) {
		check_errors("Error expanding memory allocation for array", line);
	}
	return (array);
}

double *reallocate_memory_double(double *array, int size, const unsigned int line)
{
	if (!(array = realloc(array, (size + 1) * sizeof(double)))) {
		check_errors("Error expanding memory allocation for array", line);
	}
	return (array);
}


/* free alloacted arrays */
void free_array_char(char *array)
{
	if (array) {
		free(array);
		array = NULL;
	}
	
	return;
}


void free_array_short(short *array)
{
	if (array) {
		free(array);
		array = NULL;
	}
	
	return;
}


void free_array_long(long *array)
{
	if (array) {
		free(array);
		array = NULL;
	}
	
	return;
}


void free_array_int(int *array)
{
	if (array) {
		free(array);
		array = NULL;
	}
	
	return;
}

void free_array_float(float *array)
{
	if (array) {
		free(array);
		array = NULL;
	}
	
	return;
}


void free_array_double(double *array)
{
	if (array) {
		free(array);
		array = NULL;
	}
	
	return;
}
