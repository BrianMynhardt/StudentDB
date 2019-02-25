#Mynbri003

CC=g++ #Compiler

Default:
	$(CC) -c -o driver.o driver.cpp -std=c++11 -I ./factorial_library/ -L ./factorial_library/ -lbrain_dead_factorial
	
	$(CC) -o driver driver.o -std=c++11 -I ./factorial_library/ -L ./factorial_library/ -lbrain_dead_factorial

run:
	cd factorial_library && $(MAKE)
	make
	export LD_LIBRARY_PATH=factorial_library/ && ./driver

clean:
	cd factorial_library && $(MAKE) clean
	rm -f *.o *.so driver
