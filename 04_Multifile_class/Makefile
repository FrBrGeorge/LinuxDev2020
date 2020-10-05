fun.o:	fun.c ; cc fun.c -c -o fun.o

prog.o:	prog.c ; cc prog.c -c -o prog.o

const.o:	const.c ; cc const.c -c -o const.o

prog:	const.o fun.o prog.o
	cc const.o fun.o prog.o -o prog

clean:
	rm -f prog a.out *.o
