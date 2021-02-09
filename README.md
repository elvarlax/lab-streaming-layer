# Lab Streaming Layer

It is a simple lab streaming layer project that includes a sender sending random data and a receiver.

## Setup
```cmd
> git clone https://github.com/microsoft/vcpkg
> .\vcpkg\bootstrap-vcpkg.bat
```

To install the libraries for your project, run:

```cmd
> .\vcpkg\vcpkg install liblsl
```

In order to use vcpkg with Visual Studio,
run the following command (may require administrator elevation):

```cmd
> .\vcpkg\vcpkg integrate install liblsl
```

Goto directory: "C:\vcpkg\installed\x86-windows\debug\lib"

Rename lib.lib to liblsl32.lib

Run the project