# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -g -Wall -Iinclude

# Linker flags
LDFLAGS =

# Directory names
SRCDIR = src
BUILDDIR = build
LIBDIR = lib

# Lib name 
LIB_NAME = sll

# Object files to build
OBJFILES = $(BUILDDIR)/main.o $(BUILDDIR)/sll.o $(BUILDDIR)/utils.o

# Target executable
TARGET = $(BUILDDIR)/sll

# Search path for source files
VPATH = $(SRCDIR)

# Default target

all: $(TARGET) $(LIBDIR)/lib$(LIB_NAME).a $(LIBDIR)/lib$(LIB_NAME).so


# Target to build the executable
$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) -ggdb $(OBJFILES) $(LDFLAGS)
	
# Target to build static library
$(LIBDIR)/lib$(LIB_NAME).a: $(OBJFILES) | $(LIBDIR)
	ar rcs $@ $^

# Target to build dynamic library
$(LIBDIR)/lib$(LIB_NAME).so: $(OBJFILES) | $(LIBDIR)
	$(CC) $(CFLAGS) -o $@ $^

# Target to build main.o
$(BUILDDIR)/main.o: main.c include/sll.h | $(BUILDDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Target to build sll.o
$(BUILDDIR)/sll.o: sll.c include/sll.h | $(BUILDDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Target to build the utils.o
$(BUILDDIR)/utils.o: utils.c include/sll.h | $(BUILDDIR)
	$(CC) $(CFLAGS) -c $< -o $@


# Create the build directory if it doesn't exist
$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# Create the library directory if it doesn't exist
$(LIBDIR):
	mkdir -p $(LIBDIR)
	
# Target to clean up object files and the executable
clean:
	rm -f $(OBJFILES) $(TARGET) *~
	rm -rf $(BUILDDIR)
