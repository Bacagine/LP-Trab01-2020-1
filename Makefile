# Git Hub: https://github.com/Bacagine/covid19
# 
# Makefile criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com>
# 
# covid19 é uma aplicação que ...
# 
# Data de ciração: 14/05/2020
# Data da última modificação: 16/05/2020

TARGET  = covid19
SRCDIR  = ./src
INCDIR  = ./include
OBJDIR  = ./obj
BINDIR  = ./bin
SRC     = $(wildcard $(SRCDIR)/*.c)
INC     = -I $(INCDIR)
OBJ     = $(addprefix $(OBJDIR)/,main.o covid19.o clear_buffer.o)
BIN     = $(BINDIR)/$(TARGET)
RM      = rm -rf
CC      = gcc
#CFLAGS  = -W -Wall -lm -g

all: $(OBJDIR) $(BINDIR) $(BIN)

$(BIN): $(OBJ) # $@ = $(BIN) & $< = $(OBJ)
	$(CC) -o $@ $< $(CFLAGS)
$(OBJDIR)/main.o: $(SRCDIR)/main.c $(INCDIR)/covid19.h
	$(CC) -c $< -I $(INCDIR) -o $@ $(CFLAGS)
$(OBJDIR)/covid19.o: $(SRCDIR)/covid19.c $(INCDIR)/covid19.h
	$(CC) -c $< -I $(INCDIR) -o $@ $(CFLAGS)
$(OBJDIR)/clear_buffer.o: $(SRCDIR)/clear_buffer.c $(INCDIR)/clear_buffer.h
	$(CC) -c $< -I $(INCDIR) -o $@ $(CFLAGS)
$(OBJDIR):
	mkdir $(OBJDIR)
$(BINDIR):
	mkdir $(BINDIR)
run: all
	@$(BIN)
clean:
	$(RM) $(OBJ)
mrproper: clean
	$(RM) $(OBJDIR)
	$(RM) $(BINDIR)
install:
	cp -rv $(BIN) /usr/bin/
	mkdir -p /usr/share/$(TARGET)
	cp -rv $(BINDIR)/$(TARGET) /usr/share/$(TARGET)
	cp -rv $(TARGET).desktop /usr/share/applications/
	desktop-file-install /usr/share/applications/$(TARGET).desktop
uninstall: install
	$(RM) /usr/bin/$(TARGET)
	$(RM) /usr/share/$(TARGET)
	$(RM) /usr/share/applications/$(TARGET).desktop

.PHONY: all run clean mrproper install uninstall
