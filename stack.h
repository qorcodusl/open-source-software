#ifndef STACK_H
#define STACK_H
#include <stdbool.h> 
#include <stdio.h>
#define STACK_HEADER_LOADED printf("stach.h이 포함되었습니다\n")

typedef int Item;
typedef struct stack {
Item * contents;
int top;
int size;
} Stack;

Stack * create_stack(int initial_size);
void make_empty(Stack *s);
bool is_empty(Stack *s);
bool is_full(Stack *s);
void push(Stack *s, Item i);
Item pop(Stack *s);
Item peek(Stack *s);
static void stack_underflow(void);
static void reallocate(Stack * stack);
#endif
