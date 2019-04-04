CXXFLAGS=-Wall -Wextra -O0 -g -std=c++11
LDFLAGS=

binaries=test
objects=test.o String.o 

all: $(binaries)

test: $(objects)
	g++ $(LDFLAGS) $^ -o $@

%.o: %.cpp String.h
	g++ $(CXXFLAGS) -c $< -o $@

clean:
	-$(RM) $(objects) $(binaries)
