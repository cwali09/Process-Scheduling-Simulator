//#include "queue.cpp"

template <class Type>
struct nodeType {
    Type info;
    nodeType<Type> *next;
    nodeType<Type> *previous;
};

template <class Type>
class orderedLinkedList {
    private:
        orderedLinkedList<Type> *head;
        orderedLinkedList<Type> *tail;
        orderedLinkedList<Type> *current;
        int listCount = 0;

    public:
        // Constructor
        orderedLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
            this->listCount = 0;
        };

        // Checks if the list is empty; returns true if it's empty
        bool isEmpty() {
            return listCount == 0;
        };

        void destroy() {
            if (isEmpty() != true) {
                while (current->next != nullptr) {
                    delete current->data;
                    delete current->next;
                    delete current;
                }
            }
        }

        Type traverseToIndex(int index) {
            for (int i = 0; i < index; i++) {
                current = current->next;
            }
            return current;
        }

        Type traverseToInfo(Type data) { 
            while (current->info != data || current->next != nullptr) {
                current = current->next;
            }
            return current;
        }



};