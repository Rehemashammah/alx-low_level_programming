#include "3-calc.h"

/**
 * get_op_func - function pointer
 * @s: Operator passed as argument
 *
 *
 * Return: A pointer to the function that corresponds to operator
 *
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (*s == ops[i].op[0])
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);

}
