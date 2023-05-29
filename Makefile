EXECUTABLE = bin/run
SOURCES = main.cpp ./src/*
HEADERS = ./headers

CFLAGS = -I $(HEADERS)
LIBS = -lncurses

exec: $(SOURCES)
	g++ $(CFLAGS) $(LIBS) $(SOURCES) -o $(EXECUTABLE)

clean:
	rm -f $(EXECUTABLE)