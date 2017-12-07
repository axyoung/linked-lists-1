PROGRAM = main.exe
CXXFLAGS = -Wall -g

$(PROGRAM): main.o node.o student.o
	g++ -o $@ $^

clean:
	rm -f $(PROGRAM) *.o

run: $(PROGRAM)
	./$(PROGRAM)

main.o: main.cpp node.h student.h
node.o:  node.cpp node.h student.h
student.o: student.cpp node.h student.h

