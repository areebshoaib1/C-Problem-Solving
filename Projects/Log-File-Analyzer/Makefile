CC     = gcc
CFLAGS = -Wall -Wextra -O2 -static-libgcc -static-libstdc++

OBJ = 03_file_io.o 05_parser.o 07_analyzer.o 09_reporter.o 11_alerts.o 12_main.o

analyzer: $(OBJ)
	$(CC) $(CFLAGS) -o analyzer.exe $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o analyzer.exe