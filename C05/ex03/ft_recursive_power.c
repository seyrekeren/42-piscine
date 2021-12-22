#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 0)
	{
		nb *= ft_recursive_power(nb, power - 1);
		return (nb);
	}
	return (0);
}
