#include "push_swap.h"

int	parse_input(int argc, char **argv, t_stack **a)
{
	char	**split;
	int		i;
	int		j;
	long	n;

	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (0);
		j = 0;
		while (split[j])
		{
			if (!is_valid_number(split[j]))
				return (free_split(split), 0);
			n = ft_atol(split[j]);
			if (n < INT_MIN || n > INT_MAX || has_duplicate(*a, (int)n))
				return (free_split(split), 0);
			add_to_stack(a, (int)n);
			j++;
		}
		free_split(split);
		i++;
	}
	return (1);
}

int	is_valid_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

long	ft_atol(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str && *str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0');
	return (result * sign);
}

int	has_duplicate(t_stack *stack, int num)
{
	while (stack)
	{
		if (stack->value == num)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	add_to_stack(t_stack **stack, int value)
{
	t_stack	*new;
	t_stack	*last;

	new = malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->value = value;
	new->index = -1;
	new->next = NULL;
	if (!*stack)
		*stack = new;
	else
	{
		last = *stack;
		while (last->next)
			last = last->next;
		last->next = new;
	}
}