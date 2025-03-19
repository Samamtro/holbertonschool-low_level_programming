#ifndef CALC_H
#define CALC_H
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	/* Stocke l'opérateur sous forme de chaîne de caractères */
	char *op;
	/* Pointeur vers la fonction associée à l'opérateur */
	int (*f)(int a, int b);
} op_t;
/* Déclaration de la fonction qui sélectionne l'opération à exécuter */
int (*get_op_func(char *s))(int, int);

/* Déclarations des fonctions effectuant les opérations de base */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/* Fin de la protection contre l’inclusion multiple */
#endif /* 3_CALC_H */
