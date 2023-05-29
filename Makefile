EXECUTABLE = bin/run
SOURCES = main.cpp

LIBS = -lncurses

exec: $(SOURCES)
	g++ $(LIBS) $(SOURCES) -o $(EXECUTABLE)

clean:
	rm -f $(EXECUTABLE)