CC = gcc
FLAGS = -g -Wall -Wextra -Wall -std=c11 
GCOV_FLAGS = -fprofile-arcs -ftest-coverage --coverage

OS = $(shell uname)
ifeq ($(OS), Linux)
	CHECK_FLAGS = -lcheck -pthread -lrt -lm -lsubunit
else
	CHECK_FLAGS = -lcheck
endif

SOURCES := $(shell find . -name '*.c')
OBJECTS := $(SOURCES:.c=.o)

main: $(OBJECTS)
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