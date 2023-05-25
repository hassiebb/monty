#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

//The following are the prototypes of all functions used in this project (monty)

//The realloc function is used to reallocate memory blocks
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);

//The getstdin function is used to read the input from the user
ssize_t getstdin(char **lineptr, int file);

//The clean_line function is used to clean the line from the input
char  *clean_line(char *content);

//The f_push function is used to push a node to the stack
void f_push(stack_t **head, unsigned int number);

//The f_pall function is used to print all the values in the stack
void f_pall(stack_t **head, unsigned int number);

//The f_pint function is used to print the value at the top of the stack
void f_pint(stack_t **head, unsigned int number);

//The execute function is used to execute the opcodes
int execute(char *content, stack_t **head, unsigned int count, FILE *file);

//The free_stack function is used to free the stack
void free_stack(stack_t *head);

//The f_pop function is used to remove the top element of the stack
void f_pop(stack_t **head, unsigned int count);

//The f_swap function is used to swap the top two elements of the stack
void f_swap(stack_t **head, unsigned int count);

//The f_add function is used to add the top two elements of the stack
void f_add(stack_t **head, unsigned int count);

//The f_nop function is used to do nothing
void f_nop(stack_t **head, unsigned int count);

//The f_sub function is used to subtract the top element of the stack
void f_sub(stack_t **head, unsigned int count);

//The f_div function is used to divide the top two elements of the stack
void f_div(stack_t **head, unsigned int count);

//The f_mul function is used to multiply the top two elements of the stack
void f_mul(stack_t **head, unsigned int count);

//The f_mod function is used to get the remainder of the top two elements of the stack
void f_mod(stack_t **head, unsigned int count);

//The f_pchar function is used to print the char at the top of the stack
void f_pchar(stack_t **head, unsigned int count);

//The f_pstr function is used to print the string starting at the top of the stack
void f_pstr(stack_t **head, unsigned int count);

//The f_rotl function is used to rotate the stack to the top
void f_rotl(stack_t **head, unsigned int count);

//The f_rotr function is used to rotate the stack to the bottom
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int count);

//The addnode function is used to add a node to the stack
void addnode(stack_t **head, int new_value);

//The addqueue function is used to add a node to the queue
void addqueue(stack_t **head, int new_value);

//The f_queue function is used to change the mode to queue
void f_queue(stack_t **head, unsigned int count);

//The f_stack function is used to change the mode to stack
void f_stack(stack_t **head, unsigned int count);

#endif
