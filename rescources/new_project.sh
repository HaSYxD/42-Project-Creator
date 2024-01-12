#!/bin/bash
if test -d "$1"
then
	echo ''$1' already exist'
	exit 1
fi

cp -r /home/$USER/.project_creator/blank_project ./$1

sed -i 1"s/$/$1&/g" ./$1/Makefile

if [ "$2" = "-lft" -o "$3" = "-lft" -o "$4" = "-lft" ]
then
	sed -i 14"s/$/ $\{LIBFT}&/g" ./$1/Makefile
	echo 'libft included
'
else
	sed -i 7's/.*/#&/' ./$1/Makefile
	sed -i 11's/.*/#&/' ./$1/Makefile
	sed -i 17's/.*/#&/' ./$1/Makefile
	sed -i 21's/.*/#&/' ./$1/Makefile
	sed -i 2"s/.*/\/\/&/" ./$1/src/main.c
	rm -rf ./$1/LIB/libft
fi

if [ "$2" = "-lftprintf" -o "$3" = "-lftprintf" -o "$4" = "-lftprintf" ]
then
	sed -i 14"s/$/ $\{LIBFTPRINTF}&/g" ./$1/Makefile
	echo 'ft_printf included
'
else
	sed -i 8's/.*/#&/' ./$1/Makefile
	sed -i 12's/.*/#&/' ./$1/Makefile
	sed -i 18's/.*/#&/' ./$1/Makefile
	sed -i 22's/.*/#&/' ./$1/Makefile
	sed -i 3"s/.*/\/\/&/" ./$1/src/main.c
	sed -i 8"s/.*/\/\/&/" ./$1/src/main.c
	rm -rf ./$1/LIB/ft_printf
fi

if [ "$2" = "-lmlx_Linux" -o "$3" = "-lmlx_Linux" -o "$4" = "-lmlx_Linux" ]
then
	sed -i 14"s/$/ $\{LIBMLX}&/g" $1/Makefile
	echo 'minilibx included
'
else
	sed -i 9's/.*/#&/' ./$1/Makefile
	sed -i 13's/.*/#&/' ./$1/Makefile
	sed -i 23's/.*/#&/' ./$1/Makefile
	sed -i 4"s/.*/\/\/&/" ./$1/src/main.c
	rm -rf ./$1/LIB/mlx
fi
