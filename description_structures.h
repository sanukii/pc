#ifndef DESCRIPTION_STRUCTUTES
#define DESCRIPTION_STRUCTUTES

#include <stdlib.h>
#include <stdio.h>

enum lenght
{
	name_len = 50,
	unit_name_len = 10,
	freq_name_len = 10,
	size_name_len = 5  //RAM
};

struct proc
{
	char	name[name_len];

	int	cost;
	char	cost_unit[unit_name_len];

	int	freq;
	char	freq_unit[freq_name_len];

	int	suit;
};

struct ram
{
	char	name[name_len];

	int	cost;
	char	cost_unit[unit_name_len];

	int	size;
	char	size_unit[size_name_len];

	int	suit;
};

struct vid
{
	char	name[name_len];

	int	cost;
	char	cost_unit[unit_name_len];

	int	freq;
	char	freq_unit[freq_name_len];

	int	suit;

};

#endif //DESCRIPTION_STRUCTUTES
