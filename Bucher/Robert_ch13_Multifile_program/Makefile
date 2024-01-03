
#-------------Variables-------------------#
CPP=g++
Target= elf.out
OBJ=impl.o main.o

#--------------Recipes--------------------#
build: $(Target)

$(Target): $(OBJ)
	$(CPP) -o $@ $?

%.o: %.cpp
	$(CPP) -g -c $< -o $@ 


#--------------Clean----------------------#
clean:
	@rm -rf $(Target) $(OBJ)