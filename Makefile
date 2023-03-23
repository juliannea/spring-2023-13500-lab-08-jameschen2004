OBJECTS = main.o imageio.o funcs.o

main: main.o imageio.o funcs.o
	g++ -o main $(OBJECTS)

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

main.o: main.cpp funcs.h imageio.h

sample.o: sample.cpp imageio.h

funcs.o: funcs.cpp funcs.h

imageio.o: imageio.cpp imageio.h


clean:
	rm -f sample.o imageio.o funcs.o main.o
