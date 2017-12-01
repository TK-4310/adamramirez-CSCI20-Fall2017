# makefile example for CSCI 20

#name of the executable file
all: exampleExe

#creates the executable from both the object files
exampleExe: main.o class.o 
	g++ -Wall -g -o exampleExe main.o class.o

#creates the main object file
exampleObj: main.cpp  
	g++ -Wall -g -c main.cpp

# creates the class object file
exampleClassObj: class.cpp 
	g++ -Wall -g -c class.cpp	
	
	
# to run the make file, type in make.