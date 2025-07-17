# Arrays:

## Array Syntax in C++

An array in C++ is a collection of elements of the same type placed in contiguous memory locations. Arrays are declared with a fixed size.

### Declaration
```cpp
type arrayName[arraySize];
```
Example:
```cpp
int numbers[5]; // declares an array of 5 integers
```

### Initialization
You can initialize an array at the time of declaration:
```cpp
int numbers[5] = {1, 2, 3, 4, 5};
```
If you provide fewer values, the remaining elements are set to zero:
```cpp
int numbers[5] = {1, 2}; // numbers[2], numbers[3], numbers[4] are 0
```

### Accessing Elements
Array elements are accessed using the index (starting from 0):
```cpp
std::cout << numbers[0]; // prints 1
numbers[2] = 10; // sets the third element to 10
```

### Example: Using Arrays
```cpp
#include <iostream>
int main() {
    int arr[3] = {10, 20, 30};
    for(int i = 0; i < 3; i++) {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}
```


## Array Syntax Rules (Including Modern C++ Standards)

Here are the key syntax rules for arrays in C++ (including C++11 and later):

1. **Declaration**
   - Must specify a constant size (except when using `std::vector` or Variable Length Arrays in some compilers as an extension).
   - Example: `int arr[10];`

2. **Initialization**
   - You can initialize at declaration:
     - `int arr[3] = {1, 2, 3};`
   - If fewer initializers are provided, remaining elements are zero-initialized:
     - `int arr[5] = {1, 2}; // arr[2], arr[3], arr[4] = 0`
   - Since C++11, you can use brace initialization:
     - `int arr[5]{}; // all elements are 0`
   - You can omit the size if an initializer list is provided:
     - `int arr[] = {1, 2, 3}; // size is 3`
   - zero initialization
     - All elements set to zero: `int arr5[5] = {0}; // all elements are 0`
     - You can also use brace initialization (since C++11): 
     - ` int arr6[5]{}; or int arr[5]{0} // all elements are 0`
   - Using Loops for Initialization You can assign values after declaration:
  
        ```cpp
        int arr7[5];
        for(int i = 0; i < 5; i++) {
            arr7[i] = i * 2;
        }
        ```

1. **Constexpr Arrays (C++11 and later)**
   - Arrays can be declared as `constexpr` if all values are known at compile time:
     - `constexpr int arr[] = {1, 2, 3};`

2. **Multidimensional Arrays**
   - Example: `int matrix[3][4];`
   - Initialization:
     - `int matrix[2][2] = {{1, 2}, {3, 4}};`

3. **std::array (C++11 and later)**
   - Safer, fixed-size array wrapper:
     - `#include <array>`
     - `std::array<int, 5> arr = {1, 2, 3, 4, 5};`

4. **std::vector (C++98 and later)**
   - Dynamic size, recommended for most use cases:
     - `#include <vector>`
     - `std::vector<int> v = {1, 2, 3};`

5. **Designated Initializers (C++20)**
   - Initialize specific elements:
     - `int arr[5] = {[2] = 10, [4] = 20}; // arr[2]=10, arr[4]=20, others=0`

6. **Accessing Elements**
   - Indexing starts at 0: `arr[0]` is the first element.
   - Out-of-bounds access is undefined behavior.

7. **Type Deduction with auto (C++11 and later)**
   - `auto arr = {1, 2, 3}; // arr is std::initializer_list<int>`

8.  **No Copy Assignment for Arrays**
    - Arrays cannot be assigned after declaration: `int a[3], b[3]; a = b; // Error`

> For most modern C++ code, prefer `std::array` for fixed-size and `std::vector` for dynamic-size arrays.




