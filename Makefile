main: $(OBJ)
	gcc  *.c *.h -o main

clean:
	rm *.o
