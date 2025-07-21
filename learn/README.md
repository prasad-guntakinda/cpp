# CPP Programming


<details>
<summary>Is there any API docs available for C++ standard library like Java API docs?</summary>

Yes! The most popular and detailed C++ standard library documentation is:

- [cppreference.com](https://en.cppreference.com/w/): Comprehensive, up-to-date reference for all C++ standard library classes, methods, and features.
- [cplusplus.com](https://cplusplus.com/reference/): Another useful reference site.

You can search for any class (e.g., `std::vector`, `std::array`) to see all its methods, constructors, member functions, and usage examples—similar to Java API docs.
</details>

---

<details>
<summary>Does C++ have a packaging structure like Java? How to navigate the standard library?</summary>

C++ does not have a package structure like Java's `java.lang` or `java.util`. Instead, it uses namespaces (mainly `std`) and header files to organize its standard library.

- **Namespaces:** Most standard library classes and functions are in the `std` namespace.
- **Header Files:** You include specific headers for the features you need (e.g., `<vector>`, `<map>`, `<algorithm>`).

To explore the standard library, browse by header or use documentation like [cppreference.com](https://en.cppreference.com/w/cpp/header).
</details>

---

<details>
<summary>C++ Standard Library: Categorized Header List</summary>

### Containers
- `<vector>`: `std::vector` (dynamic array)
- `<array>`: `std::array` (fixed-size array)
- `<list>`: `std::list` (doubly-linked list)
- `<deque>`: `std::deque` (double-ended queue)
- `<map>`: `std::map`, `std::multimap` (sorted associative containers)
- `<set>`: `std::set`, `std::multiset` (sorted sets)
- `<unordered_map>`: `std::unordered_map`, `std::unordered_multimap` (hash maps)
- `<unordered_set>`: `std::unordered_set`, `std::unordered_multiset` (hash sets)

### Strings & Streams
- `<string>`: `std::string`, `std::wstring`
- `<iostream>`: `std::cin`, `std::cout`, `std::cerr`
- `<sstream>`: `std::stringstream`, `std::istringstream`, `std::ostringstream`

### Algorithms & Utilities
- `<algorithm>`: Sorting, searching, transformations (`std::sort`, `std::find`, etc.)
- `<utility>`: Helpers like `std::pair`, `std::move`, `std::swap`
- `<functional>`: Function objects, `std::function`, `std::bind`

### Math & Numeric
- `<cmath>`: Math functions (`std::sqrt`, `std::pow`, etc.)
- `<numeric>`: Numeric algorithms (`std::accumulate`, etc.)

### Memory & Smart Pointers
- `<memory>`: Smart pointers (`std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr`)

### Time & Date
- `<chrono>`: Time utilities

### Threading & Concurrency
- `<thread>`: Multithreading (`std::thread`)
- `<mutex>`: Mutexes (`std::mutex`, `std::lock_guard`)
- `<future>`: Futures and async

### Others
- `<tuple>`: `std::tuple`
- `<typeinfo>`: Type information (`std::type_info`)
- `<exception>`: Exception base classes

</details>

---

<details>
<summary>Beginner's Guide: Most Useful C++ Standard Library Classes</summary>

**1. `std::vector`**
Dynamic array, resizable, most commonly used container.

**2. `std::string`**
Represents and manipulates text.

**3. `std::array`**
Fixed-size array with safer features than built-in arrays.

**4. `std::map` / `std::unordered_map`**
Associative containers for key-value pairs (sorted and hash-based).

**5. `std::set` / `std::unordered_set`**
Containers for unique elements (sorted and hash-based).

**6. `std::algorithm`**
Provides algorithms like `sort`, `find`, `reverse`, etc., that work with containers.

**7. `std::unique_ptr` / `std::shared_ptr`**
Smart pointers for automatic memory management.

**8. `std::thread`**
For multithreading and concurrency.

**9. `std::tuple`**
For grouping multiple values of different types.

**10. `std::chrono`**
For time and duration calculations.

---

> For more details and examples, visit [cppreference.com](https://en.cppreference.com/w/).

</details>

---

