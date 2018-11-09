#include <stdio.h>
#include <stdlib.h>

char*	proc_variants_buf = NULL;
char*	vid_variants_buf  = NULL;

//open and read files with variants and put them in Buf
#include "putVarsInBuf.h"

#include "description_var_struct.h"
#include "readVariants.h"

#include "description_qst_struct.h"
#include "readQuestions.h"

int main(int argc, char* argv[])
{
  	//there we create proc_variants_buf, vid_variants_buf
  	//ram_variants_buf with info from corresponding files
  	//description of defines are in putVarsInBuf.h
  	READ_IN_BUF_FROM_FILE(proc_variants)
  	READ_IN_BUF_FROM_FILE(vid_variants)
	// char* proc_variants_buf, vid_variants_buf, 
	// ram_variants_buf
	
	struct proc_and_vid* proc_array = readVariants(proc_variants_buf);
	struct proc_and_vid* vid_array	= readVariants(vid_variants_buf);
	

	return 0;
}
