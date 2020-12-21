# Compiler/Linker
CC = gcc

# Archiver and indexer
AR     = /usr/bin/ar
RANLIB = /usr/bin/ranlib

# files stuff
RM      = /bin/rm -f
CP      = /bin/cp
LIB_DIR = /Users/mdekauwe/lib/
INC_DIR = /Users/mdekauwe/include/

# library's object files.
LIB_OBJS = file_io.o memory.o error_handling.o

# library's archive file
LIB_FILE = libmy_c_lib.a

# create our library
$(LIB_FILE): 	$(LIB_OBJS)
		$(AR) rc $(LIB_FILE) $(LIB_OBJS)
		$(RANLIB) $(LIB_FILE)

# compile C source files into object files.
%.o: 		%.c
		$(CC) $(CFLAGS) -c $<

# clean everything
clean:
		$(RM) $(LIB_OBJS) $(LIB_FILE)

install:
		$(CP) $(LIB_FILE) $(LIB_DIR).
		$(CP) *.h $(INC_DIR).
		$(RANLIB) $(LIB_DIR)$(LIB_FILE)
		
