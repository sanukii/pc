#ifndef DESC_QST
#define DESC_QST

#include <stdlib.h>

enum len
{
	 qst_len = 50,
};

struct question
{
 	char question[qst_len];
	
	int low_freq_proc;
	
	int low_freq_vid;
};

#endif
