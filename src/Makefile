CC = gcc
FLAGS = -g -Wall -Wextra -Wall -std=c11 
GCOV_FLAGS = -fprofile-arcs -ftest-coverage --coverage

COMMON_SRC = common/*.c 
BIT_OPERATIONS_SRC = bit_operations/*.c
TEST_SRC = tests/*.c
SRC = $(COMMON_SRC) $(BIT_OPERATIONS_SRC)

OBJ = $(SRC:.c=.o)

.PHONY: all clean clang test gcov_report


OS = $(shell uname)
ifeq ($(OS), Linux)
	CHECK_FLAGS = -lcheck -pthread -lrt -lm -lsubunit
else
	CHECK_FLAGS = -lcheck
endif


all:















s21_decimal.a:

test:








gcov_report: FLAGS += $(GCOV_FLAGS)
gcov_report: clang test.out
	./test.out
	mkdir -p report
	gcovr --html-details -o report/report.html --exclude tests/test.c 

clean:
	rm -f *.dSYM *.o *.a *.html *.css */*.o *.gcda *.gcno  *.gcov */*.gcda */*.gcno */*.gcov

clang:
	find . -name "*.c" -o -name "*.h" -exec clang-format -style=Google -i {} +
