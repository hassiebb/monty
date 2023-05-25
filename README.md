# 0x19. C - Stacks, Queues - LIFO, FIFO

This repository contains the solutions for the project "0x19. C - Stacks, Queues - LIFO, FIFO" on ALX task. The project focuses on implementing a simple interpreter for Monty bytecodes, using stacks and queues to manipulate data.

## Description

The goal of this project is to implement a Monty bytecodes interpreter. Monty is a minimalistic programming language that uses a stack data structure to manipulate data. The project involves building a stack and queue using the LIFO (Last In, First Out) and FIFO (First In, First Out) principles, respectively.

The repository contains the following files:

- `add.c`: Implementation of the `add` Monty bytecode.
- `addnode.c`: Function to add a node to the stack or queue.
- `div.c`: Implementation of the `div` Monty bytecode.
- `execute.c`: Function to execute the Monty bytecodes.
- `free_stack.c`: Function to free the stack or queue.
- `main.c`: Main entry point of the interpreter.
- `mod.c`: Implementation of the `mod` Monty bytecode.
- `monty.h`: Header file containing function prototypes, struct definitions, and necessary libraries.
- `mul.c`: Implementation of the `mul` Monty bytecode.
- `nop.c`: Implementation of the `nop` Monty bytecode.
- `pall.c`: Implementation of the `pall` Monty bytecode.
- `pchar.c`: Implementation of the `pchar` Monty bytecode.
- `pint.c`: Implementation of the `pint` Monty bytecode.
- `pop.c`: Implementation of the `pop` Monty bytecode.
- `pstr.c`: Implementation of the `pstr` Monty bytecode.
- `push.c`: Implementation of the `push` Monty bytecode.
- `queue.c`: Function to switch to queue mode.
- `rotl.c`: Implementation of the `rotl` Monty bytecode.
- `rotr.c`: Implementation of the `rotr` Monty bytecode.
- `stack.c`: Function to switch to stack mode.
- `sub.c`: Implementation of the `sub` Monty bytecode.
- `swap.c`: Implementation of the `swap` Monty bytecode.

## Usage

To use the Monty interpreter, follow these steps:

1. Clone this repository to your local machine.
2. Compile the C files using the provided Makefile:
   ```
   make
   ```
3. Run the interpreter, specifying the Monty bytecode file as an argument:
   ```
   ./monty path/to/bytecode_file
   ```
4. The interpreter will execute the commands specified in the bytecode file and produce the corresponding output.

## Examples

Here are some examples of how to use the Monty interpreter:

- To execute a Monty bytecode file named `bytecode.m`:
  ```
  ./monty bytecode.m
  ```

- To execute a different bytecode file:
  ```
  ./monty path/to/another_bytecode_file
  ```


## Author

This project is developed by [Mohammad Hassieb](https://github.com/hassiebb/).
