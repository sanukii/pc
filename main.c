#include <stdio.h>
#include <stdlib.h>

//open and read files with variants and put them in Buf
#include "putVarsInBuf.h"

#include "description_structures.h"

#include "readVariants.h"

int main(int argc, char* argv[])
{
  //there we create proc_variants_buf, vid_variants_buf
  //ram_variants_buf with info from corresponding files
  //description of defines are in putVarsInBuf.h
  READ_IN_BUF_FROM_FILE(proc_variants)
  READ_IN_BUF_FROM_FILE(vid_variants)
  READ_IN_BUF_FROM_FILE(ram_variants)
// char* proc_variants_buf, vid_variants_buf, 
// ram_variants_buf



  return 0;
}
