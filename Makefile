CFLAGS=-Wall -g
build_path=./bin

all:	printf_width ex1-three ex1-four ex1-five ex1-six ex1-eight ex1-nine

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

clean:
	rm -rf ./bin/*
