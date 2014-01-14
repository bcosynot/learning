template <class T>
class SinglyLinkedList {
public:
  SinglyLinkedList(const T &value):next(NULL),data(value){};
  ~SinglyLinkedList(){};

  SinglyLinkedList *getNext(){return next;}
  
}
