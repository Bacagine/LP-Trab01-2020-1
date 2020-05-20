# Makefile criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com>
# 
# covid19 é uma aplicação que ...
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
SRC     = $(wildcard $(SRCDIR)/*.c)
INC     = -I $(INCDIR)
OBJ     = $(addprefix $(OBJDIR)/,main.o covid19.o clear_buffer.o)
BIN     = $(BINDIR)/$(TARGET)
RM      = rm -rf
CP      = cp -rv
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
	$(CC) -o $@ $< $(CFLAGS)
$(OBJDIR)/main.o: $(SRCDIR)/main.c $(INCDIR)/covid19.h
	$(CC) -c $< $(INC) -o $@ $(CFLAGS)
$(OBJDIR)/covid19.o: $(SRCDIR)/covid19.c $(INCDIR)/covid19.h
	$(CC) -c $< $(INC) -o $@ $(CFLAGS)
$(OBJDIR)/clear_buffer.o: $(SRCDIR)/clear_buffer.c $(INCDIR)/clear_buffer.h
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
	mkdir -p /usr/share/$(TARGET)
	$(CP) $(BINDIR)/$(TARGET) /usr/share/$(TARGET)
	$(CP) $(TARGET).desktop /usr/share/applications/
	desktop-file-install /usr/share/applications/$(TARGET).desktop

# Desinstala a aplicação
uninstall: install
	$(RM) /usr/bin/$(TARGET)
	$(RM) /usr/share/$(TARGET)
	$(RM) /usr/share/applications/$(TARGET).desktop

# 
.PHONY: all run clean mrproper install uninstall
