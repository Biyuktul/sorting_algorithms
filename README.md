# Sorting Algorithms

![C Language](https://img.shields.io/badge/Language-C-blue)
![License](https://img.shields.io/badge/License-MIT-green)
[![Documentation Status](https://readthedocs.org/projects/sorting-algorithms-c/badge/?version=latest)](https://sorting-algorithms-c.readthedocs.io/en/latest/?badge=latest)


A comprehensive collection of sorting algorithms implemented in C. This repository provides efficient implementations of classic and advanced sorting techniques with detailed explanations and complexity analysis.

## Table of Contents

- [Overview](#overview)
- [Algorithms Implemented](#algorithms-implemented)
- [File Structure](#file-structure)
- [Requirements](#requirements)
- [Usage](#usage)
- [Algorithm Complexity](#algorithm-complexity)
- [Testing](#testing)
- [Contributing](#contributing)
- [Author](#author)
- [License](#license)

## Overview

This project implements various sorting algorithms to demonstrate their functionality, efficiency, and use cases. Each algorithm is thoroughly commented to explain the logic and approach used. The implementations focus on clarity and efficiency, making them suitable for both educational purposes and practical applications.

## Algorithms Implemented

- **Bubble Sort**: A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
  
- **Insertion Sort**: Builds the sorted array one item at a time by repeatedly taking the next element and inserting it into its correct position.
  
- **Selection Sort**: Divides the input list into a sorted and an unsorted region, repeatedly selecting the smallest (or largest) element from the unsorted region and moving it to the sorted region.
  
- **Quick Sort**: Uses a divide-and-conquer strategy, selecting a 'pivot' element and partitioning the array around it.
  
- **Merge Sort**: Divides the array into halves, sorts them recursively, then merges the sorted halves.
  
- **Heap Sort**: Builds a heap from the input data and then repeatedly extracts the maximum element from the heap and rebuilds it.
  
- **Counting Sort**: Integer sorting algorithm that operates by counting the number of objects that possess distinct key values.
  
- **Shell Sort**: Generalization of insertion sort that allows the exchange of items that are far apart.
  
- **Radix Sort**: Sorts integers by processing individual digits, starting from the least significant digit.

## File Structure

```
.
├── sort.h                   # Header file with function prototypes
├── print_array.c            # Utility function to print arrays
├── print_list.c             # Utility function to print linked lists
├── 0-bubble_sort.c          # Bubble Sort implementation
├── 1-insertion_sort_list.c  # Insertion Sort implementation
├── 2-selection_sort.c       # Selection Sort implementation
├── 3-quick_sort.c           # Quick Sort implementation
├── 100-shell_sort.c         # Shell Sort implementation
├── 101-cocktail_sort_list.c # Cocktail Shaker Sort implementation
├── 102-counting_sort.c      # Counting Sort implementation
├── 103-merge_sort.c         # Merge Sort implementation
├── 104-heap_sort.c          # Heap Sort implementation
├── 105-radix_sort.c         # Radix Sort implementation
├── 106-bitonic_sort.c       # Bitonic Sort implementation
└── 107-quick_sort_hoare.c   # Quick Sort (Hoare partition) implementation
```

## Requirements

- GCC compiler
- C standard libraries
- Unix-like operating system (Linux, macOS)

## Usage

### Compiling

To compile a specific algorithm with its test file, use:

```bash
gcc -Wall -Wextra -Werror -pedantic <algorithm_file.c> <main_file.c> print_array.c print_list.c -o <output_name>
```

Example:
```bash
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
```

### Running

```bash
./<output_name>
```

Example:
```bash
./bubble
```

## Algorithm Complexity

| Algorithm         | Best Case | Average Case | Worst Case | Space Complexity |
|-------------------|-----------|--------------|------------|------------------|
| Bubble Sort       | O(n)      | O(n²)        | O(n²)      | O(1)             |
| Insertion Sort    | O(n)      | O(n²)        | O(n²)      | O(1)             |
| Selection Sort    | O(n²)     | O(n²)        | O(n²)      | O(1)             |
| Quick Sort        | O(n log n)| O(n log n)   | O(n²)      | O(log n)         |
| Merge Sort        | O(n log n)| O(n log n)   | O(n log n) | O(n)             |
| Heap Sort         | O(n log n)| O(n log n)   | O(n log n) | O(1)             |
| Counting Sort     | O(n+k)    | O(n+k)       | O(n+k)     | O(n+k)           |
| Shell Sort        | O(n log n)| O(n(log n)²) | O(n(log n)²)| O(1)            |
| Radix Sort        | O(nk)     | O(nk)        | O(nk)      | O(n+k)           |

Where n is the number of elements and k is the range of the input.

## Testing

To test the sorting algorithms, you'll need to create main files that call the sorting functions with various input arrays. These test files should verify the correctness of the sorting implementations with different input sizes and configurations.

Example of a simple test file (0-main.c):

```c
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
```

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## Author

- [Adameelmadani](https://github.com/Adameelmadani)
- [Biyuktul](https://github.com/Biyuktul)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
