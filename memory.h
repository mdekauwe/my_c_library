/*============================================================================ 
	memory.h -- interface of my general 'memory' library

	Martin De Kauwe, 28th June, 2009
==============================================================================*/
#ifndef MEMORY_LIB
#define MEMORY_LIB

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>


/* memory stuff */
void   *allocate_memory_generic(int, const unsigned int);
char   *allocate_memory_char(int, const unsigned int);
short  *allocate_memory_short(int, const unsigned int);
long   *allocate_memory_long(int, const unsigned int);
int    *allocate_memory_int(int, const unsigned int);
float  *allocate_memory_float(int, const unsigned int);
double *allocate_memory_double(int, const unsigned int);

/* reallocation stuff */
char   *reallocate_memory_char(char *, int, const unsigned int);
short  *reallocate_memory_short(short *, int, const unsigned int);
long   *reallocate_memory_long(long *, int, const unsigned int);
int    *reallocate_memory_int(int *, int, const unsigned int);
float  *reallocate_memory_float(float *, int, const unsigned int);
double *reallocate_memory_double(double *, int, const unsigned int);
	  

/* free arrays */
void   free_array_char(char *);
void   free_array_short(short *);
void   free_array_long(long *);
void   free_array_int(int *);
void   free_array_float(float *);
void   free_array_double(double *);


#endif /* MEMORY_LIB */
