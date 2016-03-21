# The compiler
CC=g++

# The flags for the compiler
CFLAGS= -Wall -Werror -Wextra -c -pedantic -Iinclude

# Flags for debug enabled compilation
DFLAGS= $(CFLAGS) -g
# Tell the Makefile that "all" and "clean" aren't files.
.PHONY: all	clean debug

# Add new files that should be worked with here. 
SRCFILES= main.c 
LIBFILES= 
HEADERS= 

# The directory in which to put all your .c files. 
SRC=src/

# The directory in which to put programwide helper .c files. 
LIB=lib/

# The directory in which to put all include files. 
INCLUDE=include/

# Generatated directories useful in compilation. 
BUILD=build/install/
DEBUG=build/debug/
DIRS= bin build build/install build/debug

#The objects
SRCOBJS=$(addprefix $(BUILD), $(patsubst %.c, %.o, $(SRCFILES) $(LIBFILES)))
DBOBJS= $(addprefix $(DEBUG), $(patsubst %.c, %.o, $(SRCFILES) $(LIBFILES)))
DEPS=$(addprefix $(INCLUDE), $(HEADERS)) 

# Note that I had to add the weird linker thing at the end for math.h
all: $(DIRS) $(SRCOBJS) 
	@clear
	@$(CC) $(SRCOBJS) -o bin/monopoly -lm 
	@echo "=== COMPILATION SUCCESSFUL ==="
	@valgrind ./bin/monopoly

$(DIRS):
	@mkdir $@

$(BUILD)%.o: $(SRC)%.cc $(DEPS)
	@$(CC) $(CFLAGS) -o $@ $<

$(BUILD)%.o: $(LIB)%.cc $(DEPS)
	@$(CC) $(CFLAGS) -o $@ $<

################################################

debug: $(DIRS) $(DBOBJS) 
	@$(CC) $(DBOBJS) -o bin/debug -lm 
	gdb -q ./bin/debug
	
$(DEBUG)%.o: $(SRC)%.cc $(DEPS)
	@$(CC) $(DFLAGS) -o $@ $<

$(DEBUG)%.o: $(LIB)%.cc $(DEPS)
	@$(CC) $(DFLAGS) -o $@ $<

clean:
	@rm -rf build	
	@rm -rf bin
	@echo "=== ALL GENERATED DIRECTORIES DELETED ==="
