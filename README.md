# 0x1B. C - Sorting algorithms & Big O
## Resources :books:

* [Sorting algorithm](https://intranet.hbtn.io/rltoken/tmzgO7xhCpNgPUxVhLKibw)
* [Big O notation](https://intranet.hbtn.io/rltoken/kJ7rgWoqdLnxSnSEoAiFCQ)
* [Sorting algorithms animations](https://intranet.hbtn.io/rltoken/kJ7rgWoqdLnxSnSEoAiFCQ)
* [15 sorting algorithms in 6 minutes](https://intranet.hbtn.io/rltoken/tmzgO7xhCpNgPUxVhLKibw)

## Learning Objectives :bulb:
* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

## Requirements :white_check_mark:

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called sort.h
* Don’t forget to push your header file
* All your header files should be include guarded
* A list/array does not need to be sorted if its size is less than 2.

## More Info

### Data Structure and Functions
* For this project you are given the following print_array, and print_list functions:
```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
* Our files print_array.c and print_list.c (containing the print_array and print_list functions) will be compiled with your functions during the correction.
* Please declare the prototype of the functions print_array and print_list in your sort.h header file
* Please use the following data structure for doubly linked list:
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
Please, note this format is used for Quiz and Task questions.

* O(1)
* O(n)
* O(n!)
* n square -> O(n^2)
* log(n) -> O(log(n))
* n * log(n) -> O(nlog(n))
* n + k -> O(n+k)
* …
Please use the “short” notation (don’t use constants). Example: O(nk) or O(wn) should be written O(n). If an answer is required within a file, all your answers files must have a newline at the end.

## Tests
Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://intranet.hbtn.io/rltoken/KkFXByKWf55lTK32JnY62w)

## Tasks :page_with_curl:
### Mandatory
- [x] **[0. Bubble sort](./0-bubble_sort.c)** - Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm.
Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line.
- [x] **[1. Insertion sort](./1-insertion_sort_list.c)** - Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm.
Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line.
- [x] **[2. Selection sort](./2-selection_sort.c)** - Write a function that sorts an array of integers in ascending order using the Selection sort algorithm.
Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line.
- [x] **[3. Quick sort ](./3-quick_sort.c)** - Write a function that sorts an array of integers in ascending order using the Quick sort algorithm.
Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line.
### Advance :muscle:
- [x] **[](./)** - Description
- [x] **[](./)** - Description
- [x] **[](./)** - Description
- [x] **[](./)** - Description
- [x] **[](./)** - Description
- [x] **[](./)** - Description
- [x] **[](./)** - Description
- [x] **[](./)** - Description
- [x] **[](./)** - Description

## Author :pencil:
**Santiago Peña Mosquera** - twitter [@Santiag11470161](https://twitter.com/Santiag11470161) - LinkedIn [Santiago Peña Mosquera](https://www.linkedin.com/in/santiago-pe%C3%B1a-mosquera-abaa20196/)
