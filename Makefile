EXECUTABLE = bin/run
SOURCES = main.cpp

exec: $(SOURCES)
	g++ $(SOURCES) -o $(EXECUTABLE)

clean:
	rm -f $(EXECUTABLE)