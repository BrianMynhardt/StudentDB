# MYNBRI003

CC=g++ #compiler

#Compile Library
Default:
	$(CC) -c -o addStudent.o addStudent.cpp -fPIC -shared -std=c++11
	$(CC) -c -o print.o print.cpp -fPIC -shared -std=c++11
	$(CC) -c -o gradeStudent.o gradeStudent.cpp -fPIC -shared -std=c++11
	$(CC) -c -o readDB.o readDB.cpp -fPIC -shared -std=c++11
	$(CC) -c -o saveDB.o saveDB.cpp -fPIC -shared -std=c++11
	$(CC) -c -o viewStudent.o viewStudent.cpp -fPIC -shared -std=c++11
	$(CC) -o libbrain_dead_studentDB.so addStudent.o viewStudent.o saveDB.o readDB.o gradeStudent.o print.o -fPIC -shared -std=c++11
	

clean:
	rm -f *.o *.so
