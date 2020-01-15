# heaps
insert and delete operation on a max heap

Insret operation:

1) Add a new element to the end of an array;
2) Sift up the new element, while heap property is broken. Sifting is done as following: compare node's value with parent's value. If they are in wrong order, swap them.

Delete operation:
Since deleting an element at any intermediary position in the heap can be costly, so we can simply replace the element to be deleted by the last element and delete the last element of the Heap.

1) Replace the root or element to be deleted by the last element.
2) Delete the last element from the Heap.
3) Since, the last element is now placed at the position of the root node. So, it may not follow the heap property. Therefore, heapify the last node placed at the position of root.

