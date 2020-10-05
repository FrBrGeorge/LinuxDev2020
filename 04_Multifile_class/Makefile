%.o:	%.c
	cc $< -c -o $@

prog:	const.o fun.o prog.o
	cc $^ -o $@

clean:
	rm -f prog a.out *.o
