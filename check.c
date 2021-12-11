#include "./push_swap.h"

static int	stupid_check(int argc, char **argv)
{
	int i;

	i = 0;
	while (++i < argc)
		if (ft_strlen(argv[i]) > 1 && argv[i][0] == '0')
			return (1);
	return (0);
}

static int	alpha_check(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(ft_isdigit(argv[i][j]) || argv[i][j] == '-'))
				return (1);
			j++;
		}
	}
	return (0);
}

static int	overflow_check(int argc, char **argv)
{
	int i;
	int k;
	int sign;
	
	i = 0;
	while (++i < argc)
	{
		sign = 1;
		k = ft_strlen(argv[i]);
		if (argv[i][0] == '-')
		{
			k--;
			sign = -1;
		}
		if (k < 10)
			continue;
		else if (k > 10)
			return (1);
		else if (k == 10 && (ft_atoi(argv[i]) == -1 || ft_atoi(argv[i]) == 0))
			return (1);
	}
	return (0);
}

static int	double_check(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (++i < argc - 1)
	{
		j = i;
		while (++j < argc)
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
	}
	return (0);
}

int check(int argc, char **argv)
{
	if (alpha_check(argc, argv))
		return (1);
	if (stupid_check(argc, argv))
		return (1);
	if (overflow_check(argc, argv))
		return (1);
	if (double_check(argc, argv))
		return (1);
	return (0);
}