> 1-3-5
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

---

<details>
<summary> Array Syntax Rules (Including Modern C++ Standards) </summary>

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


</details>

---

<details>
<summary> What are the methods available in built-in arrays? </summary>

Built-in arrays in C++ do not have any member methods or variables (like `.length()` or `.size()`). They are simply blocks of contiguous memory. You access and manipulate them using standard C++ operators and functions:

- **Accessing Elements:**
  - Use the index operator: `arr[0]`, `arr[1]`, etc.

- **Getting Array Size:**
  - Use the `sizeof` operator:
    ```cpp
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);
    ```

- **No Built-in Methods:**
  - Built-in arrays do NOT have methods like `.length()`, `.size()`, `.begin()`, or `.end()`.

- **Modern Alternatives:**
  - `std::array` (C++11): Has `.size()`, `.at()`, `.begin()`, `.end()`, etc.
  - `std::vector`: Dynamic size, many useful methods.

> For more features and safety, prefer `std::array` or `std::vector` in modern C++.

</details>

---


<details>
<summary> how to iterate over the array and display the values? </summary>

You can iterate over a built-in array and display its values using a loop. Here are two common ways:

**1. Using a for loop with array size:**
```cpp
int arr[5] = {1, 2, 3, 4, 5};
int size = sizeof(arr) / sizeof(arr[0]);
for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
}
```

**2. Using a range-based for loop (C++11 and later):**
```cpp
int arr[5] = {1, 2, 3, 4, 5};
for (int value : arr) {
    std::cout << value << " ";
}
```

Both methods will print all the elements of the array.

</details>

---

<details>
<summary> How to pass array as a method parameter? </summary>

In C++, you can pass an array to a function in several ways:

**1. As a pointer (most common):**
```cpp
void display(int numbers[], int size);
// or equivalently
void display(int* numbers, int size);
```
You must also pass the array size, because inside the function, `sizeof(numbers)` gives the size of the pointer, not the array.

**Example:**
```cpp
void display(int numbers[], int size) {
    for(int i = 0; i < size; i++) {
        std::cout << numbers[i] << " ";
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    display(arr, 5);
}
```

**2. As a reference to an array of fixed size (C++11 and later):**
```cpp
void display(const int (&numbers)[5]) {
    for(int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }
}
```

**Key Point:**
- When you pass an array as a parameter, it decays to a pointer, so always pass the size separately unless you use references or modern containers like `std::array` or `std::vector`.

> For most use cases, pass both the array and its size to the function.

</details>

---

<details>
<summary> Why can't we get the array length inside a function like in Java? </summary>

In Java, arrays have a built-in `length` property (e.g., `array.length`). But in C++, when you pass an array to a function, it "decays" to a pointer. This means:

- The function receives only the address of the first element, not the whole array.
- The size information is lost; `sizeof(numbers)` inside the function gives the size of the pointer, not the array.

**Example:**
```cpp
void display(int numbers[]){
    int len = sizeof(numbers) / sizeof(numbers[0]); // This does NOT give array length!
    // ...
}
```
If you call `display(arr)` where `arr` is `int arr[5];`, inside `display`, `sizeof(numbers)` is just the size of a pointer (usually 4 or 8 bytes), not the array.

**Correct way:**
- Always pass the array size as a separate parameter:
  ```cpp
  void display(int numbers[], int size) {
      for(int i = 0; i < size; i++) {
          std::cout << numbers[i] << " ";
      }
  }
  ```

**Summary Table:**

| Language | Array "knows" its length? | How to get length?         |
|----------|--------------------------|----------------------------|
| Java     | Yes                      | `array.length`             |
| C++      | No (after passing)       | Pass size as a parameter   |

> Only use `sizeof(array) / sizeof(array[0])` in the same scope where the array is declared, not inside a function that takes an array parameter.

</details>


