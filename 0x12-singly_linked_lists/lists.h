#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
<<<<<<< HEAD
 *
=======
>>>>>>> 57d4da0dfb9a2e96fdd3ba66051035575187f0c8
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
<<<<<<< HEAD
    char *str;
    unsigned int len;
    struct list_s *next;
=======
	char *str;
	unsigned int len;
	struct list_s *next;
>>>>>>> 57d4da0dfb9a2e96fdd3ba66051035575187f0c8
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
