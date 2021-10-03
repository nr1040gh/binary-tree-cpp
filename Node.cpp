

/*
Node class

- Should be able to point forwards and backwards
- Holds one value
- Pointers default to null front and backwards
- Value defaults to 0 for now
  - implement template for general node later?
- Serves as a helper class for doubly linked list

*/
class Node
{
public:
  int* next;
  int* back;
  int val;

  Node(val=0, next=nullptr, back=nullptr){
    this->next = next;
    this->back = back;
    this->val = val;
  }

};
