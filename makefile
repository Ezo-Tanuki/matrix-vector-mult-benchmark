all: mylib.o func.time.o 
	gcc -o main_test.out main_test.c mylib.o func.time.o
	gcc -o write_data.out write_data.c mylib.o func.time.o
	gcc -o main_b_space.out main_b_space.c mylib.o func.time.o
	gcc -o main_b_time.out main_b_time.c mylib.o func.time.o

test:
	./main_test.out

space:
	./main_b_space.out

time:
	./main_b_time.out

mylib.o:
	gcc -o mylib.o -c mylib/mylib.c

func.time.o:
	gcc -o func.time.o -c mylib/func.time.c

clear:
	rm -rf *.o *.out *.exe