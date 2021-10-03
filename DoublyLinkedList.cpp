


/*
DoublyLinkedList class

- Have a head node and a tail Node
  - Have is head and is tail node methods, make these private?
- Should be able to insert at any arbitrary index (insert)
- Should be able to add to the end by default (add)
- Should be able to change values (can we incorporate operator overload here to mimic lists/arrays?)
- Should be able to delete at any arbitrary index (delete)
- Should be able to pop last value (oldest?) (pop)
- Should initialize with head and tail unless some node or linkedlist is passed through

-Optional things that may be nice:
  - Sort (high-to-low, low-to-high, search for agorithm instead of brute force?)
  - Unique (remove duplicates, sort first then apply algorithm?)
  - Retrieve min and max
  - start and end? - Used in other increment storage like containers?
  - Append lists to end
  - Append lists via sortting
  - Unit tests
  - Return length
  - Overloading + operator to add/append lists

*/


class DoublyLinkedList
{

private:
  Node* head, tail;

public:

  DoublyLinkedList(base=NULL)
  {

    Node* head = new Node();
    Node* tail = new Node(0,back=head);
    head->next = tail;

    if (base != NULL)
    {

      for (val = base.begin(), val != base.end(); val++)
      {
        //add to DoublyLinkedList
      }

    }

  }

  //Add Node to top of list
  void add()
  {

  }

  //Delete Node from bottom of list, free node?
  void pop()
  {

  }

  //Insert Node at nth index if n < size
  void insert(n)
  {

  }

  //Delete Node at nth index if n < size
  void delete(n)
  {

  }



};
