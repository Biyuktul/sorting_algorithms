
Testing
=======

To test the sorting algorithms, you'll need to create main files that call the sorting functions with various input arrays. These test files should verify the correctness of the sorting implementations with different input sizes and configurations.

Example of a simple test file (0-main.c):

.. code-block:: c

   #include <stdio.h>
   #include <stdlib.h>
   #include "sort.h"

   /**
    * main - Entry point
    *
    * Return: Always 0
    */
   int main(void)
   {
       int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
       size_t n = sizeof(array) / sizeof(array[0]);

       print_array(array, n);
       printf("\n");
       bubble_sort(array, n);
       printf("\n");
       print_array(array, n);
       return (0);
   }