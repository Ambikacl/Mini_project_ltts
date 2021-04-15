PROJ_NAME = 	Converter
TEST_PROJ_NAME = Test_$(PROJ_NAME)


SRC = src/temp.c\
src/length.c\
src/weight.c\
src/numsys.c\
src/percentage.c

hos_SRC = test_conversion.c

TEST_SRC = test/test_conversion.c\
unity/unity.c\
main_p.c

INC_H = inc
INC_T = unity\
test

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

.PHONY: run clean test doc all

all:
	gcc -I $(INC_H) $(SRC) trans_m.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	cp test/trans_t.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c trans_t.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(hos_SRC)
	$(RM) *.$(EXEC)
	
	
	$(RM) trans_t.c


cppcheck:
	cppcheck --enable=all $(SRC) trans_m.c
debug:
	gcc -I $(INC_H) $(SRC) trans_m.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

#valgrind:
#	valgrind ./$(TEST_PROJ_NAME).$(EXEC)


clean:
	
	$(RM) *.$(EXEC)
