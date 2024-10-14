# Key Logger for Windows Devices

To create the build directory use:
```{bash}
cmake --preset default
```

In order to compile `main.cpp` use:
```{bash}
cmake --build build --target main
```

## APIs
The `Windows API` or `windows.h` was used to discretely take the user input. Specific documentation can be found at [Windows API](https://learn.microsoft.com/en-us/windows/win32/api/winbase/).

__Note: Please refrain from using this code for any malicious purposes.__