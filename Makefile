all: hello

hello: hello.o
	ld -m elf_i386 -o hello hello.o

hello.o: hello.asm
	nasm -f elf hello.asm -o hello.o

clean:
	rm -f hello *.o
