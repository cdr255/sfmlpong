CXX=g++
CFLAGS=-Wall -c
LFLAGS=-Wall
OBJS=sfmlpong.o
LIBS=-lsfml-graphics -lsfml-window -lsfml-system
sfmlpong: sfmlpong.o
	$(CXX) $(LFLAGS) $(OBJS) -o sfmlpong $(LIBS)


sfmlpong.o: sfmlpong.cpp sfmlpong.hpp
	$(CXX) $(CFLAGS) -o sfmlpong.o sfmlpong.cpp $(LIBS)


clean: 
	rm -rf *~ *.o sfmlpong
