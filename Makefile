TARGET = kdb
CC = gcc
CFLAGS = -Wall -O2
SRCS = src/main.cxx
OBJS = $(SRCS:.cxx=.o)
INCDIR = -I./inc
LIBDIR =
LIBS = -lpthread -lssl -lcrypto

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS) -o $(OBJS)

all: clean $(OBJS) $(TARGET)

clean:
	-rm -f $(OBJS) $(TARGET) *.d
