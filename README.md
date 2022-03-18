[![42](https://img.shields.io/badge/BornToCode-2_Circle-00babc?style=flat-square&logo=42)](https://42lausanne.ch/)

[![last-commit](https://img.shields.io/github/last-commit/MateyN/push_swap?style=flat-square)](https://github.com/MateyN/push_swap)

[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li><a href="#summary">Summary</a></li>
    <li><a href="#project-structure">Project Structure</a></li>
    <li><a href="#environment">Environment</a></li>
    <li><a href="#installation">Compile</a></li>
    <ul>
        <li><a href="#mandatory">Mandatory</a></li>
	</ul>
	<li><a href="#execute">Execute</a></li>
    <ul>
        <li><a href="#controls">Controls</a></li>
	</ul>
	<li><a href="#example">Example</a></li>
	<li><a href="#links">Links</a></li>
  </ol>
</details>

# Push_swap

The Push swap project is a very simple and a highly straightforward algorithm project:
data must be sorted.
You have at your disposal a set of integer values, 2 stacks, and a set of instructions
to manipulate both stacks.

## Summary

Our goal? Write a program in C called push_swap which calculates and displays
on the standard output the smallest program, made of Push swap language instructions, that sorts the integers received as arguments.

## Objectives

Writing a sorting algorithm is always a very important step in a developer’s journey. It
is often the first encounter with the concept of complexity.
Sorting algorithms and their complexity are part of the classic questions discussed
during job interviews. It’s probably a good time to look at these concepts since you’ll
have to face them at some point.
The learning objectives of this project are rigor, use of C, and use of basic algorithms.
Especially focusing on their complexity.
Sorting values is simple. To sort them the fastest way possible is less simple. Especially
because from one integers configuration to another, the most efficient sorting solution can
differ.

|                      |                                                                                                                                     |
| -------------------- | ----------------------------------------------------------------------------------------------------------------------------------  |
| **Program name**     | `push_swap`                                                                                                                         |
| **Turn in files**    | `Makefile, *.h, *.c`                                                                                                                |
| **Makefile**         | `NAME`, `all`, `clean`, `fclean`, `re`                                                                                              |
| **Arguments**        | `stack a: A list of integers`                                                                                                       |
| **External functs.** | - `read`, `write`, `malloc`, `free`, `exit`                                                                                         |
|                      | - `printf` and any equivalent YOU coded                                                                                             |
| **Libft authorized** | Yes                                                                                                                                 |
| **Description**      | Sort stacks                                                                                                                         |

## Project Structure

```shell
./
├── libft		  # libft
├── includes 	          # C header files
├── srcs                  # C source files
├── pyviz.py		  # Python visualizer
├── test.sh		  # simple test
├── Makefile
└── README.md
```

## Description

You start with two empty stacks: **a** and **b**. You are given a random list of integers via command line arguments.
<br />
<br />

Only these moves are allowed:
- `sa` : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
- `sb` : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
- `ss` : `sa` and `sb` at the same time.
- `pa` : push a - take the first element at the top of b and put it at the top of a. Do
nothing if b is empty.
- `pb` : push b - take the first element at the top of a and put it at the top of b. Do
nothing if a is empty.
- `ra` : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.
- `rb` : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
- `rr` : `ra` and `rb` at the same time.
- `rra` : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
- `rrb` : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
- `rrr` : `rra` and `rrb` at the same time.
<br />

At the end, **stack b** must empty empty and all integers must be in **stack a**, sorted in ascending order. <br />
<br />

## Environment

- MacOS 12.0.1 (Monterey, Intel)

Developed and tested in this environment.

## Compile

### Mandatory

To compile the mandatory version, run the lines below.

```shell
$ git clone https://github.com/MateyN/push_swap
$ make
```
The **push_swap** program is used in the following way.
```
./push_swap 2 1 3 6 5 8
pb
ra
ra
ra
pb
pb
pa
pa
pa
...
```
A binary will be provided in order to properly check
your program.
It will work as follows:
```shell
$>ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
       9
$>ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_Mac $ARG
OK
$>
```
If some of the arguments are wrong it should display `Error` like the following
```shell
$>./push_swap 0 one 2 3
Error
$>
```
To see push_swap in action, run ```make``` and then the following:

# push_swap_visualizer
This python script was created to visualize your work with the PUSH_SWAP
42 Project.

You must put this script in the same path of your program\
You need python3.
You can install it with Brew.\
`Brew install python3`

You may launch the script with : \
``python3 pyviz.py \`ruby -e "puts (-200..200).to_a.shuffle.join(' ')"\``
or any other list of numbers.

You can change the PUSHS_PATH to get to the relative path of your push_swap
You can pause, decrease or increase the speed, or reset at will.

![pushswap](https://media.giphy.com/media/IY71kD8nAnoq14t6CU/giphy.gif)
