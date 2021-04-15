PROJ_NAME = main
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC =src/avail.c\
src/billing.c\
src/cusdetails.c\
src/features.c\
src/roomalloc.c\
src/roomdealloc.c\
BUILD = build


INC_H = inc
INC_T = unity

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
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

INCLUDE_LIBS = -lcunit

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

.PHONY: run clean test doc 

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

clean:
	
	$(RM) *.$(EXEC)

$(BUILD):
	mkdir build
all: $(SRC) $(BUILD)
	    gcc -I inc $(UNI) $(SRC) $(INC) $(TEST_SRC).c -o $(PROJECT_OUTPUT)
run1:
	./$(PROJECT_OUTPUT)
	
