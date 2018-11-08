#ifndef DESCRIPTION_STRUCTUTES
#define DESCRIPTION_STRUCTUTES

const int name_len = 50; 
const int unit_name_len = 10;
const int freq_name_len = 10;
const int size_name_len = 3;

struct proc
{
	char	name[name_len];

	int	cost;
	char	cost_unit[unit_name_len];

	int	freq;
	char	freq_unit[freq_name_len];

	bool	suit games;
	bool 	suit science;
	bool 	suit ofice;
};

struct ram
{
	char	name[name_len];

	int	cost;
	char	cost_unit[unit_name_len];

	int	size;
	char	size_unit[size_name_len];

	bool	suit games;
	bool 	suit science;
	bool 	suit ofice;
};

struct vid
{
	char	name[name_len];

	int	cost;
	char	cost_unit[unit_name_len];

	int	freq;
	char	freq_unit[freq_name_len];

	bool	suit games;
	bool 	suit science;
	bool 	suit ofice;

};

#endif //DESCRIPTION_STRUCTUTES
