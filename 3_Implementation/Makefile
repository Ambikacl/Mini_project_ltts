# Name of the project
PROJECT_NAME = Converter.exe

# Output directory

# All source code files
SRC =main_p.c\
src/temp.c\
src/length.c\
src/weight.c\
src/numsys.c\
src/percentage.c\
test/test_converter.c\
unity/unity.c


INC = -Iinc\
-Iunity\
-Itest

$(PROJECT_NAME) : $(SRC) 
	gcc  $(INC) $(SRC) -o $(PROJECT_NAME)
	
run: $(PROJECT_NAME)
	$(PROJECT_MAKE)
	
clean :
	del \q *.exe

