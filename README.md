# ais2203_exercise1

### Setup

Clone this repository by using the link provided by clicking the green Code button above. You have the choice between HTTPS and SSH. Please choose SSH. If you have not already configured SSH, please do so. See this [link](https://docs.github.com/en/authentication/connecting-to-github-with-ssh).

IMO, the easiest way to clone a repository is using the command line. Open a command prompt with the current directory set to the directory you want the project to appear in and type `git clone` followed by the repository link.

The aim of this exercise is to get you comfortable with creating a CMake based C++ project and pushing it to GitHub. Once you have cloned this repository to your local development PC, you should add a `.gitignore` file to the project. This file needs to be placed in the root folder of the project. I.e., the same folder as this `README.md` file. The purpose of the `.gitignore` file is to let git know which files should not be versioned-controlled by git. Files you don't want to be versioned-controlled are typically:
* Large binaries
* Autogenerated build folders
* Configuration files specific to your own personal development tools.

Remember, never add or commit files to git before you have configured a proper `.gitignore` file. If you do, those files will forever be apart of the history unless some voodo is applied. It's just easier to do it right from the get-go.

For this exercise, the `.gitignore` could include something like this:

```
build         # typical folder name in case we build on the command-line
cmake-build*  # ignores CLion genereated build folders
.idea         # ignore user specific CLion settings
```

In order for you to be able to open this (pretty much empty) project in CLion, a barebone `CMakeLists.txt` has already been added. It's missing targets and source files though. It's up to you to add these.


There is no establised _correct_ way of setting up a CMake based C/C++ project. However, common sense is still useful. That is; you want the structure to be logical both for yourself and others that would get the pleasure of looking at your work. What you typically want is to have a folder structure like this:

```
README.md
.gitignore
CMakeLists.txt
include
  libname
    <public headers (.h/.hpp) goes here>
src
  CMakeLists.txt
  libname
    <sources (.c/.cpp) goes here>
    <private headers only used internally also goes here>
tests
  CMakeLists.txt
  <test files goes here>
data
  <resources used by the project goes here>
```

It might look a little bit different depending on if you are developing a library, a header-only library and/or an application. 
The overall goal is to keep the project structured in a sensible way.

Some examples: <br>
https://github.com/open-simulation-platform/libcosim (library) <br>
https://github.com/open-simulation-platform/proxy-fmu (library and executables) <br>
https://github.com/Ecos-platform/ecos (library and executable) <br>
https://github.com/NTNU-IHB/FMI4cpp (library)

### Tasks

#### Step 1 

Create a class `person` with the following attributes:
* First name
* Last name

Make use of encapsulation. When using encapsulation, we want access to be as strict as possible. 
I.e, do we need to add setter function to this class (in order to follow the requirements)?

Adittionaly, the class should define a function that returns the persons full name.

#### Step 2

Create a free function `greet` that accepts an instance of a `person`.
The function should simply print a message to the console that prints a greeting and the name of the person passed to it.
The function should live in a seperate file to the `person` class.

### Step 3
Create a `main.cpp` file that contains the code to instantiate several `person` objects. These objects should be stored in a container.
For each object in the container, call `greet` function you made, providing a different person object for each invocation.

### Step 4
If you have not already, tell CMake about the files you have created so that you are able to run the code.

### Step 5
Add and commit your changes to git. Then push your changes to github for a friendly review.
