#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h> //malloc, free, conversions (atoi), exit, NULL
# include <unistd.h> //write, read
# include <limits.h> //INT_MAX, INT_MIN
# include <stdio.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value; //valor original (argumentos recebidos)
	int				index; //posicao de cada numero num array ordenado (0, 1, 2, 3)
	struct s_stack	*next;
}	t_stack;

int		parse_input(int argc, char **argv, t_stack **a); //funcao principa que recebe os args
int		is_valid_number(char *str); //valida se e numero
long	ft_atol(const char *str); //converte de ascii para long int
int		has_duplicate(t_stack *stack, int num); //verifica se ha numeros duplicados
void	add_to_stack(t_stack **stack, int value); //adiciona o numero a stack
char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);
void	free_split(char **split);
void	swap(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	push(t_stack **dest, t_stack **src);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	reverse_rotate(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

#endif