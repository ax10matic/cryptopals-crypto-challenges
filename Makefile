lib:
	gcc -g -c src/libs/*.c
	ar -rc libcrypto.a *.o
	ar -t libcrypto.a 
	rm *.o

ex1:
	gcc -Wall -g -o ex1 src/set1/ex1.c -L. -lcrypto