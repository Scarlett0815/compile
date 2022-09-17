sort:sort.o sort.i sort.c
	gcc sort.o -o sort

sort.o:sort.s sort.i sort.c
	as sort.s -o sort.o

sort.s:sort.c sort.i
	gcc -S sort.i -o sort.s

sort.i:sort.c
	cpp sort.c -o sort.i



clean:
	rm *.o sort -rf
	rm *.s sort -rf
	rm *.i sort -rf
