CFLAGS=-Wall -g
build_path=./bin
SRC=./

all:	printf_width ex1-three ex1-four ex1-five ex1-six ex1-eight ex1-nine ex1-twelve count_each_digit ex1-thirteen char_array ex1-sixteen ex1-nineteen ex1-twenty ex1-twenty2

printf_width:
	gcc printf_width.c -o $(build_path)/$@

ex1-three:
	gcc ex1-3.c -o $(build_path)/$@

ex1-four:
	gcc ex1-4.c -o $(build_path)/$@

ex1-five:
	gcc ex1-5.c -o $(build_path)/$@

ex1-six:
	gcc ex1-6.c -o $(build_path)/$@

ex1-eight:
	gcc ex1-8.c -o $(build_path)/$@

ex1-nine:
	gcc ex1-9.c -o $(build_path)/$@

ex1-twelve:
	gcc ex1-12.c -o $(build_path)/$@

ex1-thirteen:
	gcc ex1-13.c -o $(build_path)/$@

count_each_digit:
	gcc count_each_digit_occ.c -o $(build_path)/$@

char_array:
	gcc char_array.c -o $(build_path)/$@

ex1-sixteen:
	gcc ex1-16.c -o $(build_path)/$@

ex1-nineteen:
	gcc ex1-19.c -o $(build_path)/$@

ex1-twenty:
	gcc ex1-20.c -o $(build_path)/$@

ex1-twenty2:
	gcc ex1-22.c -o $(build_path)/$@

clean:
	rm -rf ./bin/*
