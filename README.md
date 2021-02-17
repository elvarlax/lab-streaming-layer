# Lab Streaming Layer

It is a simple lab streaming layer project that includes a sender sending random data and a receiver.

## Setup

Download the vcpkg C++ package manager and run the setup:

```cmd
> git clone https://github.com/microsoft/vcpkg
> cd vcpkg
> ./bootstrap-vcpkg.bat
```

To install the Lab Streaming Layer for your project:

```cmd
> ./vcpkg install liblsl
```

In order to use vcpkg with Visual Studio, run the following command (may require administrator elevation):

```cmd
> ./vcpkg integrate install
```

Go into this directory: "C:\vcpkg\installed\x86-windows\debug\lib"

Rename the lib.lib to liblsl32.lib

Now run the projects.
