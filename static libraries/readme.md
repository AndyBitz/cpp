### project-info ###

> to make a library file you have to make an object file first: ```g++ -c file.cpp```



> after that you will get ```file.o```



> if you have multiple *.o* files you can put them together to an archive: ```ar rcs file.a file.o```



> adding a file to the archive goes like this: ```ar rcs file.a file2.o```



> before compiling make sure the header of the file you want to use is included

```
#!c++
	
#include "file.h"
```



> compiling:

```
g++ main.cpp lib.a -o main.exe

g++ main.cpp lib.o -o main.exe

g++ main.cpp lib/x64/lib.a -o main.exe
```



> organize files:
	1. put header files into an *include* folder
	2. put the *.a*, *.o*, *.lib* files into a ```lib/x86/``` or ```lib/x64/``` folder



> the folder *extern file* contains the process of creating the libary files