### project-info ###



> the <thread> library is not going to work with versions below c++11 compilers



> add ```-ptrhead`´´ as argument to ensure that threads are allowed



```
g++ filename.cpp -std=cpp++11 -pthread
```