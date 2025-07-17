# cpp
this repository contains C++ Learning Notes + Practices


<details>
<summary>How to install C++ on Windows?</summary>

1. Go to https://winlibs.com/ and download latest GCC archive
2. Extract the zip into C:\ path. it will create `mingw64` folder
3. Configure `PATH` environment variable: `C:\mingw64\bin`
4. Validate the installation with `g++ --version` command on the Terminal
   
</details>

---

<details>
<summary>How to build and run C++ program from Command-Line?</summary>

- create a hello.cpp file with below code

```c++
#include <iostream>

int main(){
	std::cout << "Hello World! from Command Line" ;
	return 0;
}
```

- compile `.cpp` file using `g++ hello.cpp` it will generate `a.exe` binary
- run `a.exe` to see the output
- while compiling use `-o` option to give different name to exe file `g++ hello.cpp -ohello` , it will generate hello.exe file
  

</details>

---

<details>
<summary> Compile on the Web Browser </summary>

1. https://cpp.sh/
2. https://www.onlinegdb.com/
3. 
</details>

---

<details>
<summary> VSCode setup for C++ </summary>
</details>

---

