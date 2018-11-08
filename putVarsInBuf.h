#ifndef PUT_VARS_IN_BUF
#define PUT_VARS_IN_BUF

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <cstring>

char* readInBufFromFile(FILE* stream)
{
	assert(stream);
	fseek(stream, 0, SEEK_END);
	size_t filesize = ftell(stream);
	rewind(stream);

	char* buf = (char*) calloc(filesize + 1, sizeof(char));
	if(fread(buf, sizeof(char), filesize, stream) 
			!= filesize)
	{
		printf("\n\tCan't read from file\n");
		exit(EXIT_FAILURE);
	}

	buf[filesize - 1] = '\0'; //especially for building tree
	return buf;
}

#define READ_IN_BUF_FROM_FILE(filename)               \
{                                                     \
  FILE* filename = fopen(#filename, "r");             \
  if(filename == NULL)                                \
  {                                                   \
    perror(#filename);                                 \
    exit(EXIT_FAILURE);                                \
  }                                                   \
  char* filename##_buf = readInBufFromFile(filename);  \
}

#endif //PUT_VARS_IN_BUF
