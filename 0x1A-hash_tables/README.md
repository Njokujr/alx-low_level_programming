# 0x1A. C - HASH TABLES

# Requirements
**General**
. Allowed editors: vi, vim, emacs
. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
. All your files should end with a new line
. A README.md file, at the root of the folder of the project is mandatory
. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
. You are not allowed to use global variables
. No more than 5 functions per file
. You are allowed to use the C standard library
. The prototypes of all your functions should be included in your header file called hash_tables.h
. Don’t forget to push your header file
. All your header files should be include guarded


# Data Structures
Please use these data structures for this project:

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

# MANDATORY_TASKS
0. >>> ht = {}
	a function that creates a hash table.

1. djb2
	a hash function implementing the djb2 algorithm.

2. key -> index
	a function that gives you the index of a key.

3. >>> ht['betty'] = 'cool'
	a function that adds an element to the hash table.

4. >>> ht['betty']
	a function that retrieves a value associated with a key.

5. >>> print(ht)
	a function that prints a hash table.

6. >>> del ht
	a function that deletes a hash table.

# ADVANCED_TASK
7. $ht['Betty'] = 'Cool'
	Rewrite the previous functions using these data structures:

. shash_table_t *shash_table_create(unsigned long int size);
. int shash_table_set(shash_table_t *ht, const char *key, const char *value);
. The key/value pair should be inserted in the sorted list at the right place
. Note that here we do not want to do exactly like PHP: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it. See example.
. char *shash_table_get(const shash_table_t *ht, const char *key);
. void shash_table_print(const shash_table_t *ht);
. Should print the hash table using the sorted linked list
. void shash_table_print_rev(const shash_table_t *ht);
. Should print the hash tables key/value pairs in reverse order using the sorted linked list
. void shash_table_delete(shash_table_t *ht);
. You are allowed to have more than 5 functions in your file
