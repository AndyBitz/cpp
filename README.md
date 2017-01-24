### project-data ###
compile:
```
g++ foo.cpp -o bar.exe
g++ foo.cpp -o bar.exe -std=c++11
g++ foo.cpp -o bar.exe -std=c++14
g++ foo.cpp -o bar.exe -std=c++17

// or

X:\somewhere\Microsoft Visual Studio 14.0\VC\vcvarsall.bat
cl /EHsc foo.cpp /out:bar.exe
```