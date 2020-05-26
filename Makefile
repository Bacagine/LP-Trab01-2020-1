# Makefile criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com>
# 
# covid19 é uma aplicação que recebe e processa informações a respeito do 
# numero de contagios por Covid-19 em um conjunto de paises num
# determinado periodo de tempo
# 
# Data de ciração: 14/05/2020
# Data da última modificação: 16/05/2020
# 
# Git Hub: https://github.com/Bacagine/LP-Trab01-2020-01

TARGET  = covid19
SRCDIR  = ./src
INCDIR  = ./include
OBJDIR  = ./obj
BINDIR  = ./bin
IMGDIR  = ./icons
SRC     = $(wildcard $(SRCDIR)/*.c)
INC     = -I $(INCDIR)
OBJ     = $(addprefix $(OBJDIR)/,main.o covid19.o clear_buffer.o stdout.o)
BIN     = $(BINDIR)/$(TARGET)
IMG     = $(IMGDIR)/$(TARGET).png
RM      = rm -rf
CP      = cp -r
MK      = mkdir -p
LINK    = ln -s
DESKTOP = desktop-file-install
CC      = gcc
#CFLAGS  = -W -Wall -lm -g

all: $(OBJDIR) $(BINDIR) $(BIN)

# Cria o diretorio onde
# irá ficar os arquivos objetos
$(OBJDIR):
	mkdir $(OBJDIR)

# Cria o diretorio onde irá ficar
# o arquivo binário para execução
$(BINDIR):
	mkdir $(BINDIR)

$(BIN): $(OBJ) # $@ = $(BIN) & $< = $(OBJ)
	$(CC) -o $@ $(OBJ) $(CFLAGS)
$(OBJDIR)/main.o: $(SRCDIR)/main.c $(INCDIR)/covid19.h $(INCDIR)/clear_buffer.h $(INCDIR)/stdout.h
	$(CC) -c $< $(INC) -o $@ $(CFLAGS)
$(OBJDIR)/covid19.o: $(SRCDIR)/covid19.c $(INCDIR)/covid19.h $(INCDIR)/clear_buffer.h
	$(CC) -c $< $(INC) -o $@ $(CFLAGS)
$(OBJDIR)/clear_buffer.o: $(SRCDIR)/clear_buffer.c $(INCDIR)/clear_buffer.h
	$(CC) -c $< $(INC) -o $@ $(CFLAGS)
$(OBJDIR)/stdout.o: $(SRCDIR)/stdout.c $(INCDIR)/stdout.h
	$(CC) -c $< $(INC) -o $@ $(CFLAGS)

# Executa a aplicação
run: all
	@$(BIN)

# Apaga os objetos
clean:
	$(RM) $(OBJ)

# Apaga os objetos e o arquivo
# binário
mrproper: clean
	$(RM) $(OBJDIR)
	$(RM) $(BINDIR)

# Instala a aplicação
install:
	$(CP) $(BIN) /usr/bin/
	$(MK) /usr/share/$(TARGET)
	$(CP) .tux.txt /usr/share/$(TARGET)/tux.txt
	$(MK) /usr/share/$(TARGET)/icons/
	$(CP) $(BINDIR)/$(TARGET) /usr/share/$(TARGET)
	$(CP) $(IMGDIR) /usr/share/$(TARGET)/
#	$(LINK) /usr/share/$(TARGET)/icons/$(TARGET).png /usr/share/icons/hicolor/128x128/apps/$(TARGET).png
	$(CP) $(TARGET).desktop /usr/share/applications/
	$(DESKTOP) /usr/share/applications/$(TARGET).desktop

# Desinstala a aplicação
uninstall:
	$(RM) /usr/bin/$(TARGET)
	$(RM) /usr/share/$(TARGET)
	$(RM) /usr/share/icons/hicolor/128x128/apps/$(TARGET).png
	$(RM) /usr/share/applications/$(TARGET).desktop

# 
.PHONY: all run clean mrproper install uninstall
