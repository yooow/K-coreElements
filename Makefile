main: $(OBJ)
	gcc  main.c Outils.c minHeap.c -o main

clean:
	rm *.o