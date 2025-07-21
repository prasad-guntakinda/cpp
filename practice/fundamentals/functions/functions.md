# Functions:



## Question And Answers

<details>
<summary>Why do we need to declare a function before calling it? (with a comparison to Java))</summary>

In C++, the compiler reads code from top to bottom. If you call a function before it is defined, you must declare (prototype) it first. This is different from Java, where the order of method definitions inside a class does not matter.

### Why?
- The C++ compiler needs to know about a function's existence and its signature before it is used, so it can check types and generate correct code.
- If you call a function before the compiler has seen its definition or declaration, you'll get a "not declared in this scope" error.

### Code Examples

**Case 1: Function defined before main (no prototype needed)**
```cpp
void greet() {
    std::cout << "Hello!" << std::endl;
}

int main() {
    greet(); // OK: greet is already defined
    return 0;
}
```

**Case 2: Function defined after main (prototype needed)**
```cpp
void greet(); // Declaration (prototype)

int main() {
    greet(); // OK: compiler knows about greet
    return 0;
}

void greet() {
    std::cout << "Hello!" << std::endl;
}
```

If you omit the prototype in Case 2, you'll get an error: `'greet' was not declared in this scope`.

### Java vs C++
| Java                        | C++                                 |
|-----------------------------|-------------------------------------|
| Methods inside classes      | Functions can be global             |
| Order doesn’t matter        | Order matters (declare before use)  |
| No need for prototypes      | Prototypes needed if defined later  |

> In summary: In C++, always declare a function before you use it, unless you define it above the calling code.

</details>