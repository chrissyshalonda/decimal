CC = gcc
FLAGS = -g -Wall -Wextra -Wall -std=c11 
GCOV_FLAGS = -fprofile-arcs -ftest-coverage --coverage

DEBUG = 0



OS = $(shell uname)
ifeq ($(OS), Linux)
	CHECK_FLAGS = -lcheck -pthread -lrt -lm -lsubunit
else
	CHECK_FLAGS = -lcheck -I tests -L tests
endif

ENTRY_POINTS := $(shell grep -r -l  "int main" --exclude Makefile)
ENTRY_POINTS_OBJ := $(ENTRY_POINTS:.c=.o)
SOURCES := $(filter-out $(ENTRY_POINTS), $(shell find . -name '*.c' ! -path "./tests/*"))
OBJECTS := $(SOURCES:.c=.o)

TEST_SOURCES := $(shell find ./tests -name '*.c')
TEST_OBJECTS := $(TEST_SOURCES:.c=.o)
GCOV_FILES := $(shell find . -name '*.gcda' ) $(shell find . -name '*.gcno') $(shell find . -name '*.dSYM')  



SOURCES := $(shell find . -name '*.c')
OBJECTS := $(SOURCES:.c=.o)

# test: s21_decimal.a $(TEST_OBJECTS)
# 	$(CC) $(FLAGS) s21_decimal.a $(TEST_OBJECTS)  -o test.out $(CHECK_FLAGS) 
# 	./test.out

main: $(OBJECTS)
	$(CC) $(FLAGS) s21_decimal.a $(TEST_OBJECTS)  -o test.out $(CHECK_FLAGS) 
	$(CC) $(FLAGS) $(OBJECTS) -o main.out
	./main.out



all: s21_decimal.a clean

s21_decimal.a: $(OBJECTS)
	ar rcs s21_decimal.a $(OBJECTS)
	ranlib s21_decimal.a

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) 
	rm -rf *.dSYM
	rm -f main.out

clean-all: clean
	rm -f s21_decimal.a


gcov_report: FLAGS += $(GCOV_FLAGS)
gcov_report: clang test.out
	./test.out
	mkdir -p report
	gcovr --html-details -o report/report.html --exclude tests/test.c 



clang:
	clang-format -style=Google -i $(SOURCES)


.PHONY: all clean clang test gcov_report main