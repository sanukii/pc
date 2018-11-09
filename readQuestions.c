#include <stdio.h>
#include <stdlib.h>

#include "readQuestions.h"

struct question* readQuestions(char* qst)
{
	int num_read, char_ind = 0;
	int num_of_quest = 0;
	int quest_ind = 0; 
	
	while(qst[char_ind] != '\0')
		if(qst[char_ind++] == '\n')
			num_of_quest++;

	struct question* qst_array =
	(struct question*) calloc(num_of_quest,
	sizeof(struct question));

	char_ind = 0;	
	while(qst[char_ind] !='\0')
	{
	//read question
	sscanf(&(qst[char_ind]), "%s%n", 
	  qst_array[quest_ind].question, &num_read);
	char_ind = char_ind + num_read;
	
      printf("%s\n", qst_array[quest_ind].question);

	//read low_freq_proc
	sscanf(&(qst[char_ind]), "%d%n", 
  &(qst_array[quest_ind].low_freq_proc), &num_read);
	char_ind = char_ind + num_read;
	
   printf("%d", qst_array[quest_ind].low_freq_proc);
	
	//read  low_freq_vid

		sscanf(&(qst[char_ind]), "%d%n", 
      			&(qst_array[quest_ind].low_freq_vid), &num_read);
		char_ind = char_ind + num_read;
	
  		printf("%d\n", qst_array[quest_ind].low_freq_vid);
	
	}

	return qst_array;
} 	
