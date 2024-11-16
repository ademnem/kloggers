# Key Logger for Windows Devices

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

_Note: Data transmission part of this project has been omitted. Please refrain from using this code for any malicious purposes._
