# More singly linked lists

This project focuses on working with singly linked lists in C. The main structure used is `listint_t`:

```c
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Tasks

1. **Print elements**: Write `void print_list(const listint_t *h)` to print all elements in a list.
2. **List length**: Write `size_t listint_len(const listint_t *h)` to count the elements in a list.
3. **Add node at the beginning**: Write `listint_t *add_nodeint(listint_t **head, const int n)` to add a node at the start of a list.
4. **Add node at the end**: Write `listint_t *add_nodeint_end(listint_t **head, const int n)` to add a node at the end of a list.
5. **Free list**: Write `void free_listint(listint_t *head)` to free memory used by a list.
6. **Delete head node**: Write `int pop_listint(listint_t **head)` to delete the head node and return its data.
7. **Get nth node**: Write `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)` to find the nth node in a list.
8. **Sum list data**: Write `int sum_listint(listint_t *head)` to find the sum of all data in a list.
9. **Insert node**: Write `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)` to insert a node at a specific position.
10. **Delete node**: Write `int delete_nodeint_at_index(listint_t **head, unsigned int index)` to delete a node at a specific index.

## How to run

1. Create a `main.c` file to test the functions.
2. Include the header file containing the `listint_t` structure and function prototypes.
3. In the `main` function, create a `listint_t` list, call the functions, and print results.
4. Compile the program using `gcc`.
5. Run the compiled program.

