#include "file_io.h"

/* check file is fed on the stdin */
void check_stdin(const unsigned int line)
{
	if (isatty(0)) {
		check_errors("Can't find anything on stdin, try again...", line);
	}
	return;
}


/* OPEN FILE */
FILE *open_file(const char *filename, const char *mode, const unsigned int line)
{	
	FILE *ptr = NULL; 
	if ((ptr = fopen(filename, mode)) == NULL) {
		check_errors("Couldn't open file", line);
	}
	return (ptr);
}

/* Seek to point in file */
void seek_around_file(FILE *fp, long offset, int starting_pt, const unsigned int line)
{
	if (fseek(fp, offset, starting_pt)) { 
	 	check_errors("Error seeking to where you asked in the file", line);
	}
	return;
}

/* FILE READING */
void read_file_generic(FILE *fp, void *array, int pixelsize, int size, char **argv, const unsigned int line)
{
	if (fread(array, pixelsize, size, fp) != size) {
		check_errors("Error reading file into memory", line);
	}
	return;
}


void read_file_char(FILE *fp, char *array, int size, char **argv, const unsigned int line)
{
	if (fread(array, sizeof (char), size, fp) != size) {
		check_errors("Error reading file into memory", line);
	}
	return;
}


void read_file_short(FILE *fp, short *array, int size, char **argv, const unsigned int line)
{
	if (fread(array, sizeof (short), size, fp) != size) {
		check_errors("Error reading file into memory", line);
	}
	return;
}

void read_file_long(FILE *fp, long *array, int size, char **argv, const unsigned int line)
{
	if (fread(array, sizeof (long), size, fp) != size) {
		check_errors("Error reading file into memory", line);
	}
	return;
}


void read_file_int(FILE *fp, int *array, int size, char **argv, const unsigned int line)
{
	if (fread(array, sizeof (int), size, fp) != size) {
		check_errors("Error reading file into memory", line);
	}
	return;
}


void read_file_float(FILE *fp, float *array, int size, char **argv, const unsigned int line)
{
	if (fread(array, sizeof (float), size, fp) != size) {
		check_errors("Error reading file into memory", line);
	}
	return;
}


void read_file_double(FILE *fp, double *array, int size, char **argv, const unsigned int line)
{
	if (fread(array, sizeof (double), size, fp) != size) {
		check_errors("Error reading file into memory", line);
	}
	return;
}

/* read a chunk of a file into memory - used when fseeking */
void read_seg_generic(FILE **fp, void *array, int pixelsize, int size, char **argv, const unsigned int line)
{
	if (fread(array, pixelsize, size, *fp) != size) {
		check_errors("Error reading chunk of file into memory", line);
	}
	return;
}


void read_seg_char(FILE **fp, char *array, int size, char **argv, const unsigned int line)
{
	if (fread(array, sizeof (char), size, *fp) != size) {
		check_errors("Error reading chunk of file into memory", line);
	}
	return;
}


void read_seg_short(FILE **fp, short *array, int size, char **argv, const unsigned int line)
{
	if (fread(array, sizeof (short), size, *fp) != size) {
		check_errors("Error reading chunk of file into memory", line);
	}
	return;
}

void read_seg_long(FILE **fp, long *array, int size, char **argv, const unsigned int line)
{
	if (fread(array, sizeof (long), size, *fp) != size) {
		check_errors("Error reading chunk of file into memory", line);
	}
	return;
}


void read_seg_int(FILE **fp, int *array, int size, char **argv, const unsigned int line)
{
	if (fread(array, sizeof (int), size, *fp) != size) {
		check_errors("Error reading chunk of file into memory", line);
	}
	return;
}


void read_seg_float(FILE **fp, float *array, int size, char **argv, const unsigned int line)
{
	if (fread(array, sizeof (float), size, *fp) != size) {
		check_errors("Error reading chunk of file into memory", line);
	}
	return;
}


void read_seg_double(FILE **fp, double *array, int size, char **argv, const unsigned int line)
{
	if (fread(array, sizeof (double), size, *fp) != size) {
		check_errors("Error reading chunk of file into memory", line);
	}
	return;
}


/* close file */
void close_file(FILE *fp, const unsigned int line)
{
	if (fclose(fp) != 0) {
		check_errors("Error reading chunk of file into memory", line);
	}
	return;
}

/* K & R func (pg.29)... reads a line into s and returns the length */
int getline(char *s, int lim) 
{
	int c, i;
	
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	
	if (c == 'n') {
		s[i] = c;
		++i;
	}
	/* add null character ('\0') to makr the end of the string */
	s[i] = '\0';
	
    return i;
}


