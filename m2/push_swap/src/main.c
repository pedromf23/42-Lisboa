#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d -> ", stack->value);
		stack = stack->next;
	}
	printf("NULL\n");
}

t_stack	*new_node(int value)
{
	t_stack *node = malloc(sizeof(t_stack));
	if (!node)
		return NULL;
	node->value = value;
	node->next = NULL;
	return node;
}

void	free_stack(t_stack *stack)
{
	t_stack *tmp;
	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}

void	append_node(t_stack **stack, t_stack *new)
{
	t_stack *last;

	if (!*stack)
	{
		*stack = new;
		return;
	}
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = new;
}

int	main(int argc, char **argv)
{
	t_stack *a = NULL;
	t_stack *b = NULL;
	int i = 1;

	if (argc < 2)
	{
		printf("Uso: ./push_swap num1 num2 ...\n");
		return 1;
	}

	// Construir stack A na ordem correta
	while (i < argc)
	{
		append_node(&a, new_node(atoi(argv[i])));
		i++;
	}

	printf("Stack A inicial:\n");
	print_stack(a);
	printf("Stack B inicial:\n");
	print_stack(b);

	// Testar swap
	printf("\n--- swap(a) ---\n");
	swap(&a);
	print_stack(a);

	// Testar push b <- a
	printf("\n--- push(b <- a) ---\n");
	push(&b, &a);
	printf("Stack A:\n");
	print_stack(a);
	printf("Stack B:\n");
	print_stack(b);

	// Testar rotate(b)
	printf("\n--- rotate(b) ---\n");
	rotate(&b);
	print_stack(b);

	// Testar reverse_rotate(b)
	printf("\n--- reverse_rotate(b) ---\n");
	reverse_rotate(&b);
	print_stack(b);

	free_stack(a);
	free_stack(b);
	return 0;
}