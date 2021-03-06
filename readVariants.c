#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "readVariants.h"

struct proc_and_vid* readVariants(char *buf, int* num_elem)
{
	int num_read, char_ind = 0;
	int num_of_elem = 0;
	int elem_ind = 0;

	while(buf[char_ind] != '\0')
		if(buf[char_ind++] == '\n')
			num_of_elem++;

	struct proc_and_vid* elem_array = 
	(struct proc_and_vid*) calloc(num_of_elem, 
	sizeof(struct proc_and_vid));
		
	char_ind = 0;
	while(buf[char_ind] !='\0')
	{
	//read name
	sscanf(&(buf[char_ind]), "%s%n", 
	  elem_array[elem_ind].name, &num_read);
	char_ind = char_ind + num_read;
	
	printf("%s\n", elem_array[elem_ind].name);

	//read freq
	sscanf(&(buf[char_ind]), "%d%n", 
	  &(elem_array[elem_ind].freq), &num_read);
	char_ind = char_ind + num_read;
	
	printf("%d", elem_array[elem_ind].freq);
	
	//read  freq_unit

	sscanf(&(buf[char_ind]), "%s%n", 
	 elem_array[elem_ind].freq_unit, &num_read);
	char_ind = char_ind + num_read;
	
     printf("%s\n", elem_array[elem_ind].freq_unit);
	
	//read cost

	sscanf(&(buf[char_ind]), "%d%n", 
	  &(elem_array[elem_ind].cost), &num_read);
	char_ind = char_ind + num_read;
	
	printf("%d", elem_array[elem_ind].cost);

	
	//read cost_unit
	sscanf(&(buf[char_ind]), "%s%n", 
	 elem_array[elem_ind].cost_unit, &num_read);
	char_ind = char_ind + num_read;
	
     	printf("%s\n", elem_array[elem_ind].cost_unit);
	}

	return elem_array;
}
