# Specifiy the compiler and flags to be used


# Specifiy the target
all: bfs.exe

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
bfs.exe: Course.o Driver.o Graph.o
	g++ Find.o  Driver.o Graph.o -o bfs.exe

# Specify how the object files should be created from source files
Course.o: Course.cpp
	g++ -c  Course.cpp

Driver.o: Driver.cpp
	g++  -c  Driver.cpp

Graph.o: Graph.cpp
	g++ -c  Graph.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing

clean:
	rm -f *.o Find.exe

