# 42-Project-Creator
This project aim to help you setup a c project easely and quickly.

# How to install
You can install the script with
```
./install
```
This will create an alias in your zshrc config file and copy the script in a hidden folder in your home directory.

# How to use
Once install you can create a new project using
```
new_project <project name> <lib flags>
```
This will create a project folder with a source, include, LIB directory and a fonctionning makefile.

The "lib flag" are flags to choose which 42 library you wich to include.

Currently you can use:
	-lft
	-lprintf
	-lmlx
