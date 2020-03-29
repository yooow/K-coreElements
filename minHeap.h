#ifndef MINHEAP_FILE
#define MINHEAP_FILE

typedef struct {
    int *arr;
    int count;
    int capacity;
    int heap_type; // for min heap , 1 for max heap
} Heap;

Heap *CreateHeap(int capacity,int heap_type);
void insert(Heap *h, int key);
void print(Heap *h);
void heapify_bottom_top(Heap *h,int index);
void heapify_top_bottom(Heap *h, int parent_node);
int PopMin(Heap *h);
#endif