#ifndef LISTS_H
#define LISTS_H


#include <stdlib.h>	/* Inclusion de stdlib.h pour malloc(), free(), etc */

/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
*/
typedef struct list_s
{
	char *str;	/* Chaîne stockée dynamiquement */
	unsigned int len;	/* Longueur de la chaîne */
	struct list_s *next;	/* Pointeur vers le prochain nœud */
} list_t;

/* Prototypes des fonctions */
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void __attribute__((constructor)) premain();

#endif /* LISTS_H */
