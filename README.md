# ais2203_exercise1

Clone this repository by using the link provided by clicking the green Code button above. You have the choice between HTTPS and SSH. Please choose SSH. If you have not already configured SSH, please do so. See this [link](https://docs.github.com/en/authentication/connecting-to-github-with-ssh).

The aim of this exercise is to get you comfortable with creating a CMake based C++ project and pushing it to GitHub. Once you have cloned this repository to your local development PC, you should add a `.gitignore` file to the project. This file needs to be placed in the root folder of the project. I.e., the same folder as this `README.md` file. The purpose of the `.gitignore` file is to let git know which files should not be versioned-controlled by git. Files you don't want to be versioned-controlled are typically:
* Large binaries
* Auogenerated build folders
* Configuration files specific to your own personal development tools.

Remember, never add or commit files to git before you have configured a proper `.gitignore` file. If you do, those files will forever be apart of the history unless some voodo is applied. It's just easier to do it right from the get-go.

For this exercise, the `.gitignore` could include something like this:

```
build         # typical folder name in case we build on the command-line
cmake-build*  # ignores CLion genereated build folders
.idea         # ignore user specific CLion settings
```



