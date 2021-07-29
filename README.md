# Bugs Hunt
 Hi guys, welcome to Bugs Hunt - an event by CodeLab. We're going to outline a few requirements, as well as instructions on how to run our code. I hope you have fun, and maybe learn something cool too :)
 
## Requirements
 Our programs are written in Python, C, C++ and Java. While you can solve all of these by plain observation, we ***strongly*** recommend using a text editor and going through our code yourself, and making changes where necessary.
  
 If you do not have a Text Editor installed, I'd suggest [Visual Studio Code](https://code.visualstudio.com/download "Get VSCode") since it is cross-platform and has a huge amount of extensions, and is what I personally use too :)
  
 If you want to get through all of the programs, you're going to need a C/C++ compiler, Python 3.x installed and a Java runtime.
 
 We assume you are using a terminal. Your Text Editor/IDE might be able to run the code for you directly.
 
## C/C++
 We have tested our code using GCC, Clang and MSVC on Windows, Linux and macOS.
 Ensure that you have **AT LEAST** one of them installed.
 
### Compile (Windows)
 NOTE: Requires a developer command prompt to be open, or Windows won't be happy. Instructions available [here](https://docs.microsoft.com/en-us/visualstudio/ide/reference/command-prompt-powershell?view=vs-2019).
 
#### **C/C++**
 ```
 > cl [filename.extension]
 > filename[.exe optional]
 ```
 
### Complile (Linux, macOS, Windows with WSL)
#### **C**
 ```
 > gcc/clang [filename.c]
 > ./a.out
 ```
#### **C++**
 ```
 > g++/clang++ [filename.cpp]
 > ./a.out
 ```
 
## Python
 Ensure that you have Python 3 installed (and not 2.x) We have tested our code with Python 3.7+
 
### Check your version of Python
 ```
 > python --version
 > python3 --version
 ```
 From now on, we will be calling our commands ```python```. Replace with ```python3``` if necessary.
 
### Running your code
#### Windows, Linux and macOS
 ```
 > python [filename.py]
 ```

#### Linux only (macOS might not have the correct environment variable set)
 ```
 > ./[filename.py]
 ```
 In case of a permission error, use the following command and rerun the above command.
 ```
 > chmod +x *.py
 ```
 
## Java
 Make sure you have a fairly recent version of the JDK installed. Our code has been tested with JDK11. It shouldn't really matter.

 If you don't have one already installed, we recommend using OpenJDK. Available [here](https://adoptopenjdk.net/).

### Running your code
 ```
 > javac [filename.java]
 > java [filename]
 ```
 
 
