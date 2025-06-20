
Usage
=====

Compiling
---------

To compile a specific algorithm with its test file, use:

.. code-block:: bash

   gcc -Wall -Wextra -Werror -pedantic <algorithm_file.c> <main_file.c> print_array.c print_list.c -o <output_name>

Example:

.. code-block:: bash

   gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble

Running
-------

.. code-block:: bash

   ./<output_name>

Example:

.. code-block:: bash

   ./bubble