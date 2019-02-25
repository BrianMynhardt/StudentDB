#Mynbri003

CC=g++ #Compiler

Default:
	$(CC) -c -o main.o main.cpp -std=c++11 -I ./studentDB_library/ -L ./studentDB_library/ -lbrain_dead_studentDB
	
	$(CC) -o main main.o -std=c++11 -I ./studentDB_library/ -L ./studentDB_library/ -lbrain_dead_studentDB

run:
	cd studentDB_library && $(MAKE)
	make
	export LD_LIBRARY_PATH=studentDB_library/ && ./main

clean:
	cd studentDB_library && $(MAKE) clean
	rm -f *.o *.so main
