SRC = main.c vector3d/vector3d.c
OBJS = main.o vector3d/vector3d.o 
BUILD_DIR = build


program: $(OBJS)
		gcc -o $@ $^

%.o: %.c 
		gcc -c $^ -o $@

.depend: $(SRC)
		gcc -MM $^ -o $@

clean:
		rm -f $(OBJS) program .depend

include .depend
.PHONY: clean