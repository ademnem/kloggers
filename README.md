# Key Logger for Windows Devices

This is a project that I initially created in order to learn more about cybersecurity. Through this I gained more insight into operating systems and programming in C++. All code is for research purposes, please refrain from using any of this for any malicious activities. Thank you and have a nice day.

To create the build directory use:
```{bash}
cmake --preset default
```

In order to compile `main.cpp` use:
```{bash}
cmake --build build --target main
```

To execute the executable file either:
```{bash}
./build/main <filename>
```
or
```{bash}
cd build
./main <filename>
```


## APIs
The `Windows API` or `windows.h` was used to discretely take the user input. Specific documentation can be found at [Windows API](https://learn.microsoft.com/en-us/windows/win32/api/winbase/).


_Note: Please refrain from using this code for any malicious purposes._
