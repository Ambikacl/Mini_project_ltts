
CONV = all.exe
SRC = main.c\
src/temp.c\
src/length.c\
src/weight.c\
src/numsys.c\
src/percentage.c

INC = inc

$(CONV): $(SRC) 
	gcc -I$(INC) $(SRC) -o all.exe
run : $(CONV)
	$(CONV)

clean:
	del /q *.exe