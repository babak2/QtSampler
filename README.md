# QtSampler

Overview:

QtSampler is a simple Qt application that serves as a starting point for developers looking to build graphical user interface (GUI) applications using the Qt framework. It provides a basic structure and functionality to help you understand how to create Qt-based projects.

Features:

- Minimalistic GUI application.
- Utilizes Qt Widgets for the graphical interface.
- Written in C++ for flexibility and performance.
- Easy-to-understand code structure for educational purposes.


## Table of Contents

- [Prerequisites](#prerequisites)
- [Installation](#installation)
  - [Qt Installation](#qt-installation)
  - [Qt Installation on Linux](#qt-installation-on-linux)
  - [Building the Project](#building-the-project)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)


## Prerequisites

Before you begin, ensure you have met the following requirements:

1. **C++ Compiler:**
   - Your preferred C++ compiler (e.g., GCC, Clang).

2. **Qt Framework:**
   - Version 5.12.8 or higher.
   - Modules: Widgets, Core, Gui.

3. **Build System:**
   - qmake (typically included with Qt).

4. **Operating System:**
   - Linux (Ubuntu)


### Qt Installation

This project relies on the Qt framework. Follow the steps below to install Qt:

1. **Download Qt:**
   Visit the official [Qt download page](https://www.qt.io/download) and download the installer for your platform.

2. **Install Qt:**
   Run the downloaded installer and follow the installation instructions. Make sure to select the necessary components, including the Qt version, modules (e.g., Qt Widgets), and tools.

3. **Set up Qt Paths:**
   After installation, add the Qt bin directory to your system PATH. For example, on Linux, add the following line to your shell profile file (e.g., `~/.bashrc` or `~/.zshrc`):

   ```
   export PATH="/path/to/qt/bin:$PATH"
   ```

### Qt Installation on Ubuntu 

On Ubuntu or other Debian-based Linux distributions, use the following command to install the Qt 5 framework:

```
sudo apt update
sudo apt install qt5-default
```

This command installs the default version of the Qt framework (Qt 5) along with essential development tools.


### Verify the Installation:

After the installation, you can verify that Qt is installed correctly by checking the installed version:

```
qmake --version
```

This should display information about the installed version of qmake, the build date, and the Qt version.

For example: 

`QMake version 3.1`
`Using Qt version 5.12.8 in /usr/lib/x86_64-linux-gnu`

### Setting Up Visual Studio Code for Qt Development

Inside the `.vscode` folder, in `c_cpp_properties.json` file, make sure to modify "compilerPath" value to point to the location of your GCC compiler, if your GCC location is different.

Also, make sure to modify "includePath" value to point to the location of your Qt library if you have a different version of Qt or a different directory structure (other than `/usr/include/x86_64-linux-gnu/qt5`).

<code style="background-color: #f0f0f0; padding: 10px; display: block;">
{
  "configurations": [
    {
      "name": "Linux",
      "includePath": [
      "${workspaceFolder}/**",
        "/usr/include/x86_64-linux-gnu/qt5/QtWidgets",
        "/usr/include/x86_64-linux-gnu/qt5"
      ],
      "defines": [
        "_DEBUG",
        "UNICODE"
      ],
      "compilerPath": "/usr/bin/gcc",
      "cStandard": "c11",
      "cppStandard": "c++17",
      "intelliSenseMode": "linux-gcc-x64"
    }
  ],
  "version": 4
}
</code>

# Building the Project

Follow these steps to build the project:

Clone the Repository:

```
git clone https://github.com/babak2/QtSampler.git
cd QtSampler
```

If you have the version of Qt and the same directory structure (`/usr/include/x86_64-linux-gnu/qt5`), you can use the provided Makefile and build the project using: 


`make`

If successful, the executable (e.g., QtSampler) should be generated in the project directory.


## Generating Makefile (For Different Qt Configurations)

If you have a different version of Qt or a different directory structure (other than `/usr/include/x86_64-linux-gnu/qt5`), use QtSampler.pro and run the following command to generate the Makefile:


```
qmake -o Makefile QtSampler.pro
```

Build the project using:

make



## To Run

Execute the compiled binary:

`./QtSampler`


## License

This program is licensed under the GNU GENERAL PUBLIC LICENSE. See LICENSE for more information.


## Author 

Babak Mahdavi Ardestani

babak.m.ardestani@gmail.com
