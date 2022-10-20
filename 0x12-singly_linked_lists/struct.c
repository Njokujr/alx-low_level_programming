/**
 * struct list_s - singly linked list
 * @str: string - malloc string
 * @len: length of the string
 * @next: points to the next node
 * Desc: singly linked list node structure for ALX project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
