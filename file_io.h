/*============================================================================ 
	file_io.h -- interface of my general file input/output 'file_io' library

	Martin De Kauwe, 28th June, 2009
==============================================================================*/

#ifndef FILE_IO_LIB
#define FILE_IO_LIB

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>


int    getline(char *, int);

/* check file is on the stdin */
void check_stdin(const unsigned int);

/* file reading */
void   read_file_generic(FILE *, void *, int, int, char **, const unsigned int);
void   read_file_char(FILE *, char *, int, char **, const unsigned int);
void   read_file_short(FILE *, short *, int, char **, const unsigned int);
void   read_file_long(FILE *, long *, int, char **, const unsigned int);
void   read_file_int(FILE *, int *, int, char **, const unsigned int);
void   read_file_float(FILE *, float *, int, char **, const unsigned int);
void   read_file_double(FILE *, double *, int, char **, const unsigned int);

/* open file */
FILE  *open_file(const char *, const char *, const unsigned int);

/* seek through the file */
void   seek_around_file(FILE *, long, int, const unsigned int);

/* close file */
void   close_file(FILE *, const unsigned int);




#endif /* FILE_IO_LIB */

