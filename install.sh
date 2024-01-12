#!/bin/bash

mkdir /home/$USER/.project_creator

cp -r ./rescources/blank_project /home/$USER/.project_creator/
cp -r ./rescources/new_project.sh /home/$USER/.project_creator/

echo "alias new_project=/home/$USER/.project_creator/new_project.sh" >> /home/$USER/.zshrc
