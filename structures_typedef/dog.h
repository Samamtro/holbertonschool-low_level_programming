#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Description: Defines metadata about the dog and type of dog's struct
 */
typedef struct dog
{
	char *name;	/* Pointeur vers le nom du chien */
	float age;	/* Âge du chien en années */
	char *owner;	/* Pointeur vers le nom du propriétaire */
} dog_t;	/* Définition d'un alias "dog_t" pour struct dog */
/* Additional function prototypes */
/* Déclarations des prototypes des fonctions associées */
/* Fonction pour afficher un caractère */
int _putchar(char c);
/* Initialise une structure dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* Affiche les informations d'un chien */
void print_dog(struct dog *d);
/* Alloue et initialise une nouvelle structure dog */
dog_t *new_dog(char *name, float age, char *owner);
/* Libère la mémoire allouée pour une structure dog */
void free_dog(dog_t *d);
#endif	/* Fin de la directive de préprocesseur */
