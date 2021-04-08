CC = cl.exe
SRC_FILES = src\hex.cxx
OBJ_FILES = hex.obj

build:
	$(CC) /c /TP /EHsc /I includes $(SRC_FILES)
	lib.exe $(OBJ_FILES) /MACHINE:x64 /OUT:cxxhex_x64.lib

all: build
	del $(OBJ_FILES)