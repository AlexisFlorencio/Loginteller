############################################################################
# Makefile for building: loginteller
# 20120508 - www.binefa.cat
#############################################################################
####### Compiler, tools and options

CC              = gcc
CFLAGS          = -o
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE        = rm -f
####### Files
SOURCES   = loginteller.c
DESTDIR   = /usr/local/bin
TARGET    = loginteller
####### Compilation and cleaning. Be careful, you have to write a TAB character at the beginnig of each command. Do not write whitespace characters.
loginteller:
    $(CC) $(SOURCES) $(CFLAGS) $(TARGET)
clean:
    $(DEL_FILE) $(TARGET)
####### Install and uninstall. Be careful, you have to write a TAB character at the beginnig of each command. Do not write whitespace characters.
install: $(TARGET)
    $(INSTALL_PROGRAM) $(TARGET) $(DESTDIR)
uninstall:
    $(DEL_FILE) $(DESTDIR)/$(TARGET)
