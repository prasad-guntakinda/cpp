# sizeof operator

The `sizeof` operator in C++ is used to determine the size (in bytes) of a data type or object at compile time. It is very useful for understanding memory usage and for working with arrays and structures.

## Syntax

```cpp
sizeof(type)
sizeof(variable)
```

## Examples

### 1. Size of Basic Data Types

```cpp
std::cout << sizeof(int);      // Typically 4
std::cout << sizeof(double);   // Typically 8
std::cout << sizeof(char);     // Always 1
```

### 2. Size of Arrays

```cpp
int arr[10];
std::cout << sizeof(arr);              // Size of entire array (e.g., 40 if int is 4 bytes)
std::cout << sizeof(arr[0]);           // Size of one element (e.g., 4)
int length = sizeof(arr) / sizeof(arr[0]); // Number of elements in array
```

### 3. Size of Structures

```cpp
struct Point {
    int x, y;
};
std::cout << sizeof(Point); // Size of struct (e.g., 8)
```

### 4. Size of Pointers

```cpp
int* p;
std::cout << sizeof(p); // Size of pointer (typically 4 or 8 bytes depending on system)
```

## Notes

- `sizeof` is evaluated at compile time.
- Parentheses are optional for variables, but required for types.
- The result is of type `size_t` (an unsigned integer type).

> Use `sizeof` to write portable code that adapts to different data type sizes and architectures.


