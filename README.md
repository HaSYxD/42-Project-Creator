# 42-Project-Creator
This project aim to help you setup a c project easely and quickly.

# How to install
First of all you need to ensure that you are using the zsh shell.

You can install the script with:
```
./install.sh
```
This will create an alias in your zshrc config file and copy the script in a hidden folder in your home directory.

# How to use
Once install you can create a new project using:
```
new_project <project name> <lib flags>
```
This will create a project folder with a source, include, LIB directory and a fonctionning makefile.

The "lib flag" are flags to choose which 42 library you wich to include.

Currently you can use: -lft -lftprintf -lmlx_Linux

If you wich to use your own library you can find the installed script in /home/user/.project_creator/. Inside the "blank_project" you can replace the libraries that are inside the LIB folder with your own. They MUST have the same name or the script wont work.

# Updates
If a new commit as been done and you want to update the script, you can just copy what's in the rescources folder inside /home/user/.project_creator/. A script for updates while come in the future.
