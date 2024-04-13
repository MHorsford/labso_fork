CC = clang
CLANGS = -Wall -Wextra -g

all: Fork HelloWorld

FORK = Fork
HELLO_WORLD = HelloWorld
MAIN_SRC = fork.c
HELLO_WORLD_SRC = hello_world.c

all: $(FORK) $(HELLO_WORLD)

$(FORK): $(MAIN_SRC)
  $(CC) $(CLANGS) -o $(FORK) $(MAIN_SRC)
$(HELLO_WORLD): $(HELLO_WORLD_SRC)
  $(CC) $(CLANGS) -o $(HELLO_WORLD) $(HELLO_WORLD_SRC)

clean:
  rm -f $(FORK) $(HELLO_WORLD)