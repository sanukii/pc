#ifndef DESCRIPTION_STRUCTUTES
#define DESCRIPTION_STRUCTUTES

#include <stdlib.h>

enum lenght
{
	name_len = 50,
	unit_name_len = 10,
	freq_name_len = 10,
};

struct proc_and_vid
{
	char	name[name_len];

	int	cost;
	char	cost_unit[unit_name_len];

	int	freq;
	char	freq_unit[freq_name_len];

	int	suit;
};

#endif //DESCRIPTION_STRUCTUTES
