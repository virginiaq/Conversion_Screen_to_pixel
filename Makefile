CC= clang
CFLAGS= -Werror -Wno-pragma-pack -I SDL2/include
LDFLAGS= -lSDL2 -L SDL2/lib/x64
BINARY = conversion
BINARY_TESTS = conversion_tests

ifeq ($(OS),Windows_NT)
	BINARY:=$(BINARY).exe
	BINARY_TESTS:=$(BINARY_TESTS).exe
endif

conversion.exe: main.o
	$(CC) $(LDFLAGS) -o $@ $^

main.o: main.c
	$(CC) $(CFLAGS) -c -o $@  $^

math.o: math.c
	$(CC) $(CFLAGS) -c -o $@  $^

tests.o: tests.c aiv_unit_test.h
	$(CC) $(CFLAGS) -c -o $@  $^

tests: tests.o math.o
	$(CC) -o $(BINARY_TESTS) $(LDFLAGS) $^
	./$(BINARY_TESTS)
