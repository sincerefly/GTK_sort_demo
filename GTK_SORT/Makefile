VPATH=sort:head

Objects=main.o srand.o BubbleSort.o HeapSort.o \
HillSort.o QuickSort.o SelectionSort.o StrInSort.o

main:$(Objects)
	gcc -o main $(Objects) `pkg-config --libs --cflags gtk+-2.0`

$(Objects): %.o: %.c
	$(CC) -c $< -o $@ `pkg-config --libs --cflags gtk+-2.0`
  
.PHONY: clean
clean:
	rm $(Objects) main

