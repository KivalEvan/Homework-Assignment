// LinkedList.cpp -- class for a linked list as a data structure
    T info;
    Node<T> *next;
    Node<T> *start;
    LinkedList() { start = NULL; }
    ~LinkedList() { makeEmpty(); }
    // inserts at the beginning of the linked list
    void insertFront(T &element) {
        Node<T> *newNode = new Node<T>;
        newNode->info = element;
        newNode->next = start;
        start = newNode;
    }
    // returns true if element is found; returns false if element is not found
    bool find(T &target) {
        bool found = false;
        Node<T> *ptr = start;
        while (ptr != NULL && !found) {
            if (ptr->info == target) {
                found = true;
            }
            else {
                ptr = ptr->next;
            }
        }
        return found;