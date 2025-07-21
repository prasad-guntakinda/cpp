# Vectors

In C++, a vector is a dynamic array provided by the Standard Template Library (STL). Unlike regular arrays, vectors can grow or shrink in size automatically as elements are added or removed. Vectors are the most commonly used sequence container in modern C++ because they are flexible, safe, and efficient for most use cases.

## Key Features of Vectors

- **Dynamic Size:** Vectors can change their size at runtime.
- **Contiguous Memory:** Elements are stored in contiguous memory, just like arrays.
- **Type Safety:** Vectors are type-safe and can store any data type.
- **Member Functions:** Vectors provide many useful member functions for insertion, deletion, access, and capacity management.
- **Automatic Memory Management:** Vectors handle memory allocation and deallocation automatically.

## Syntax

To use vectors, include the `<vector>` header:

```cpp
#include <vector>
```

Declare a vector of integers:

```cpp
std::vector<int> v;
```

## Initialization

You can initialize vectors in several ways:

```cpp
std::vector<int> v1; // empty vector
std::vector<int> v2(5); // vector of size 5, all elements initialized to 0
std::vector<int> v3(5, 10); // size 5, all elements are 10
std::vector<int> v4 = {1, 2, 3, 4}; // initializer list (C++11)
```

## Adding and Removing Elements

- `push_back(value)`: Adds an element to the end.
- `pop_back()`: Removes the last element.
- `insert(position, value)`: Inserts value at the given position.
- `erase(position)`: Removes element at the given position.
- `clear()`: Removes all elements.

Example:

```cpp
std::vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.pop_back(); // removes 30
```

## Accessing Elements

- `v[index]`: Access element at index (no bounds checking).
- `v.at(index)`: Access element with bounds checking.
- `front()`: First element.
- `back()`: Last element.

Example:

```cpp
std::vector<int> v = {1, 2, 3};
std::cout << v[0]; // prints 1
std::cout << v.at(1); // prints 2
```

## Iterating Over a Vector

```cpp
std::vector<int> v = {1, 2, 3, 4};
for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << " ";
}
// Range-based for loop (C++11)
for (int x : v) {
    std::cout << x << " ";
}
```

## Capacity and Size

- `size()`: Number of elements.
- `capacity()`: Allocated storage.
- `empty()`: Checks if vector is empty.
- `resize(n)`: Changes the number of elements.
- `reserve(n)`: Reserves storage.

## Example: Using Vectors

```cpp
#include <iostream>
#include <vector>
int main() {
    std::vector<int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);

    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    v.pop_back(); // removes 15

    for (int x : v) {
        std::cout << x << " ";
    }
    return 0;
}
```

## Advantages of Vectors

- No need to manage memory manually.
- Can grow or shrink as needed.
- Safer than raw arrays (with `at()` for bounds checking).
- Rich set of member functions.

## When to Use Vectors

- When you need a dynamic array.
- When you want automatic memory management.
- When you need to frequently add or remove elements at the end.

> For most C++ programs, prefer `std::vector` over raw arrays for safety, flexibility, and ease of use.

---

## Modern C++ Syntax Rules & Features for Vectors (C++11/14/17/20)

1. **Initializer List (C++11)**
   - Initialize vectors using curly braces:
     ```cpp
     std::vector<int> v = {1, 2, 3};
     ```

2. **Emplace Functions (C++11)**
   - `emplace_back()` constructs elements in-place, avoiding copies:
     ```cpp
     v.emplace_back(42);
     ```

3. **Range-based For Loop (C++11)**
   - Iterate easily over elements:
     ```cpp
     for (int x : v) { /* ... */ }
     ```

4. **auto Keyword (C++11)**
   - Type deduction for iterators and loops:
     ```cpp
     for (auto it = v.begin(); it != v.end(); ++it) { /* ... */ }
     ```

5. **Move Semantics (C++11)**
   - Vectors support efficient move operations:
     ```cpp
     std::vector<int> v2 = std::move(v1);
     ```

6. **Shrink to Fit (C++11)**
   - Reduce capacity to fit size:
     ```cpp
     v.shrink_to_fit();
     ```

7. **Data Access (C++11)**
   - Get raw pointer to data:
     ```cpp
     int* ptr = v.data();
     ```

8. **constexpr Support (C++20)**
   - Some vector operations can be used in constant expressions.

9. **std::erase / std::erase_if (C++20)**
   - Remove elements by value or predicate:
     ```cpp
     std::erase(v, 5); // remove all 5s
     std::erase_if(v, [](int x){ return x % 2 == 0; }); // remove even numbers
     ```

10. **Safe Element Access**
    - `at()` provides bounds-checked access.

11. **Capacity and Size Functions**
    - `size()`, `capacity()`, `empty()`, `resize()`, `reserve()`, `shrink_to_fit()`

12. **Allocator Support**
    - Custom memory allocators can be used.

13. **Structured Bindings (C++17)**
    - With `auto [a, b] = ...` for pairs, not directly for vectors, but useful with algorithms.

14. **Template Argument Deduction (C++17)**
    - Deduce vector type from initializer:
      ```cpp
      std::vector v{1, 2, 3}; // deduces std::vector<int>
      ```

15. **Other STL Features**
    - Works with algorithms (`std::sort`, `std::find`, etc.)
    - Supports iterators, reverse iterators, and const iterators.

---

> Modern C++ makes vectors safer, more expressive, and more efficient. Prefer using these features for clean and robust code!

