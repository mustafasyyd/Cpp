#---------Variables--------------
#Defining and Flags
CPPFLAGS= -Wall 
#Variables defining and Pattern matching
CPP = g++
SRCS = $(Target).cpp
PREP = $(SRCS:.cpp=.ipp)
ASS = $(SRCS:.cpp=.asm)
OBJS = $(SRCS:.cpp=.o)

#------------Recipes--------------
.phony:  build
build: $(Target).out

.phony: all
all: $(Target).out $(OBJS) $(ASM) $(PREP)

#------------Building------------
%.o: %.cpp
	$(CPP) -c -o $@ $<

%.asm: %.cpp
	$(CPP) -S -o $@ $<

%.ipp: %.cpp
	$(CPP) -E -o $@ $<
	
$(Target).out: $(SRCS)
	$(CPP) -o $@ $<

targetexecute:
	@chmod +x $(Target).out
	./$(Target).out

#---------Cleaning---------------
.phony: clean
clean:
	rm -rf $(Target).out $(OBJS) $(PREP) $(ASM)