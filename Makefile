# Git Hub: https://github.com/Bacagine/covid19
# 
# Makefile criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com>
#
# Data de ciração: 14/05/2020
# Data da última modificação: 15/05/2020
# 

TARGET = covid19
SRCDIR = ./src
OBJDIR = ./obj
INCDIR = ./include
BINDIR = ./bin
SRC = $(wildcard $(SRCDIR/*.c))
OBJ = $(wildcard $(OBJDIR/*.o))
INC = $(wildcard $(INCDIR/*.h))
CC = gcc
CFLAGS = -W -lm -ansi

.PHONY: clean realclean install uninstall

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)
main.o: $(SRCDIR)/main.c $(INCDIR)/covid19.h
	$(CC) -c main.c
covid19.o: $(SRCDIR)/covid19.c $(INCDIR)/covid19.h
	$(CC) -c covid19.c
clean:
	rm -f $(OBJ)
realclean: clean
	rm -f $(TARGET)
install:
	mkdir -p /usr/share/$(TARGET)
	cp -r $(BINDIR)/$(TARGET) /usr/share/$(TARGET)
	cp -r $(TARGET).desktop /usr/share/applications/
	desktop-file-install /usr/share/applications/$(TARGET).desktop
uninstall: install
	rm -rf /usr/share/$(TARGET)
	rm -rf /usr/share/applications/$(TARGET).desktop
