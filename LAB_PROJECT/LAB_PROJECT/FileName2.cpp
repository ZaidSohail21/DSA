//#include <iostream>
//#include <string>
//using namespace std;
//
//struct DLLNode {
//    int data;
//    DLLNode* next;
//    DLLNode* prev;
//
//    DLLNode(int val) : data(val), next(nullptr), prev(nullptr) {}
//};
//
//class myDLL {
//private:
//    DLLNode* head;
//    DLLNode* tail;
//
//public:
//    myDLL() : head(nullptr), tail(nullptr) {}
//
//    ~myDLL() {
//        DLLNode* current = head;
//        while (current != nullptr) {
//            DLLNode* nextNode = current->next;
//            delete current;
//            current = nextNode;
//        }
//        head = nullptr;
//        tail = nullptr;
//    }
//
//    bool isEmpty() const {
//        return head == nullptr && tail == nullptr;
//    }
//
//    void insertAtTail(int value) {
//        DLLNode* nn = new DLLNode(value);
//
//        if (isEmpty()) {
//            head = nn;
//            tail = nn;
//        }
//        else {
//            nn->prev = tail;
//            tail->next = nn;
//            tail = nn;
//        }
//    }
//
//    void insertAtHead(int value) {
//        DLLNode* nn = new DLLNode(value);
//
//        if (isEmpty()) {
//            head = nn;
//            tail = nn;
//        }
//        else {
//            nn->next = head;
//            head->prev = nn;
//            head = nn;
//        }
//    }
//
//    int deleteFromHead() {
//        if (isEmpty()) {
//            cout << "List is empty\n";
//            return NULL;
//        }
//        int retVal = head->data;
//        if (head == tail) {
//            delete head;
//            head = nullptr;
//            tail = nullptr;
//        }
//        else {
//            DLLNode* temp = head;
//            head = head->next;
//            head->prev = nullptr;
//            delete temp;
//        }
//        return retVal;
//    }
//
//    int deleteFromTail() {
//        if (isEmpty()) {
//            std::cout << "List is empty\n";
//            return NULL;
//        }
//        int retVal = tail->data;
//        if (head == tail) {
//            delete tail;
//            head = nullptr;
//            tail = nullptr;
//        }
//        else {
//            DLLNode* temp = tail;
//            tail = tail->prev;
//            tail->next = nullptr;
//            delete temp;
//        }
//        return retVal;
//    }
//
//    bool deleteValue(int value) {
//        if (isEmpty()) {
//            return false;
//        }
//        else if (head == tail) {
//            if (head->data == value) {
//                delete head;
//                head = nullptr;
//                tail = nullptr;
//                return true;
//            }
//            else {
//                return false;
//            }
//        }
//        else if (head->data == value) {
//            deleteFromHead();
//            return true;
//        }
//        else if (tail->data == value) {
//            deleteFromTail();
//            return true;
//        }
//        else {
//            DLLNode* temp = head->next;
//            while (temp != nullptr && temp != tail) {
//                if (temp->data == value) {
//                    temp->prev->next = temp->next;
//                    temp->next->prev = temp->prev;
//                    delete temp;
//                    return true;
//                }
//                temp = temp->next;
//            }
//            return false;
//        }
//    }
//
//    void displayFromHead() const {
//        if (isEmpty()) {
//            cout << "None";
//        }
//        else {
//            DLLNode* temp = head;
//            while (temp != nullptr) {
//                cout << temp->data << " ";
//                temp = temp->next;
//            }
//        }
//    }
//
//    void displayFromTail() const {
//        if (isEmpty()) {
//            cout << "None";
//        }
//        else {
//            DLLNode* temp = tail;
//            while (temp != nullptr) {
//                cout << temp->data << " ";
//                temp = temp->prev;
//            }
//        }
//    }
//};
//
//class Person {
//protected:
//    string name;
//public:
//    myDLL enrolledCourses;
//    myDLL assignedCourses;
//
//    Person(string n) : name(n) {}
//    virtual int getID() const = 0;
//
//    virtual void display() const {
//        cout << "Name: " << name << ", ID: " << getID();
//        cout << "\n  Enrolled Courses: ";
//        enrolledCourses.displayFromHead();
//        cout << "\n  Assigned Courses: ";
//        assignedCourses.displayFromHead();
//        cout << "\n----\n";
//    }
//
//    string getName() const {
//        return name;
//    }
//};
//
//class Student : public Person {
//public:
//    int studentID;
//
//    Student(int id, std::string n) : Person(n), studentID(id) {}
//
//    int getID() const override {
//        return studentID;
//    }
//
//    void display() const override {
//        std::cout << "Student ";
//        Person::display();
//    }
//};
//
//class Faculty : public Person {
//public:
//    int facultyID;
//
//    Faculty(int id, std::string n) : Person(n), facultyID(id) {}
//
//    int getID() const override {
//        return facultyID;
//    }
//
//    void display() const override {
//        std::cout << "Faculty ";
//        Person::display();
//    }
//};
//
//struct Node {
//    Person* data;
//    Node* leftChild;
//    Node* rightChild;
//
//    Node(Person* val) : data(val), leftChild(nullptr), rightChild(nullptr) {}
//};
//
//class Tree {
//protected:
//    Node* root;
//public:
//    Tree();
//    virtual void insert(Person* value) = 0;
//    virtual ~Tree();
//};
//
//Tree::Tree() {
//    root = nullptr;
//}
//
//Tree::~Tree() {
//}
//
//class BST : public Tree {
//public:
//    BST() : Tree() {}
//    ~BST() override;
//
//    void insert(Person* value) override;
//    Node* search(int id) const;
//    void inorderTraversal() const;
//    void deleteNode(int id);
//
//    void enrollCourse(int personID, int courseID);
//    void assignCourse(int personID, int courseID);
//
//private:
//    Node* insertRecursive(Node* node, Person* value);
//    Node* searchRecursive(Node* node, int id) const;
//    void inorderRecursive(Node* node) const;
//    Node* findMin(Node* node);
//    Node* deleteNodeRecursive(Node* node, int id);
//    void deleteTreeNodes(Node* node);
//};
//
//Node* BST::insertRecursive(Node* node, Person* value) {
//    if (node == nullptr) {
//        return new Node(value);
//    }
//
//    if (value->getID() < node->data->getID()) {
//        node->leftChild = insertRecursive(node->leftChild, value);
//    }
//    else if (value->getID() > node->data->getID()) {
//        node->rightChild = insertRecursive(node->rightChild, value);
//    }
//    else {
//        std::cout << "ID " << value->getID() << " already exists! Cannot insert duplicate.\n";
//        delete value;
//    }
//    return node;
//}
//
//void BST::insert(Person* value) {
//    this->root = insertRecursive(this->root, value);
//}
//
//Node* BST::searchRecursive(Node* node, int id) const {
//    if (node == nullptr) {
//        return nullptr;
//    }
//
//    if (node->data->getID() == id) {
//        return node;
//    }
//    else if (id < node->data->getID()) {
//        return searchRecursive(node->leftChild, id);
//    }
//    else {
//        return searchRecursive(node->rightChild, id);
//    }
//}
//
//Node* BST::search(int id) const {
//    return searchRecursive(this->root, id);
//}
//
//void BST::inorderRecursive(Node* node) const {
//    if (node == nullptr) {
//        return;
//    }
//    inorderRecursive(node->leftChild);
//    node->data->display();
//    inorderRecursive(node->rightChild);
//}
//
//void BST::inorderTraversal() const {
//    if (this->root == nullptr) {
//        std::cout << "Tree is empty.\n";
//        return;
//    }
//    inorderRecursive(this->root);
//}
//
//Node* BST::findMin(Node* node) {
//    while (node->leftChild != nullptr) {
//        node = node->leftChild;
//    }
//    return node;
//}
//
//Node* BST::deleteNodeRecursive(Node* node, int id) {
//    if (node == nullptr) {
//        return nullptr;
//    }
//
//    if (id < node->data->getID()) {
//        node->leftChild = deleteNodeRecursive(node->leftChild, id);
//    }
//    else if (id > node->data->getID()) {
//        node->rightChild = deleteNodeRecursive(node->rightChild, id);
//    }
//    else {
//        if (node->leftChild == nullptr) {
//            Node* temp = node->rightChild;
//            delete node->data;
//            delete node;
//            return temp;
//        }
//        else if (node->rightChild == nullptr) {
//            Node* temp = node->leftChild;
//            delete node->data;
//            delete node;
//            return temp;
//        }
//
//        Node* temp = findMin(node->rightChild);
//
//        delete node->data;
//        node->data = temp->data;
//
//        node->rightChild = deleteNodeRecursive(node->rightChild, temp->data->getID());
//    }
//    return node;
//}
//
//void BST::deleteNode(int id) {
//    this->root = deleteNodeRecursive(this->root, id);
//    cout << "Attempted to delete item with ID: " << id << "\n";
//}
//
//void BST::deleteTreeNodes(Node* node) {
//    if (node == nullptr) return;
//    deleteTreeNodes(node->leftChild);
//    deleteTreeNodes(node->rightChild);
//    delete node->data;
//    delete node;
//}
//
//BST::~BST() {
//    deleteTreeNodes(this->root);
//    this->root = nullptr;
//}
//
//void BST::enrollCourse(int personID, int courseID) {
//    Node* personNode = search(personID);
//    if (personNode != nullptr) {
//        personNode->data->enrolledCourses.insertAtTail(courseID);
//        cout << "Enrolled course " << courseID << " for person " << personID << "\n";
//    }
//    else {
//        std::cout << "Person with ID " << personID << " not found.\n";
//    }
//}
//
//void BST::assignCourse(int personID, int courseID) {
//    Node* personNode = search(personID);
//    if (personNode != nullptr) {
//        personNode->data->assignedCourses.insertAtTail(courseID);
//        cout << "Assigned course " << courseID << " to person " << personID << "\n";
//    }
//    else {
//        cout << "Person with ID " << personID << " not found.\n";
//    }
//}
//
//int main() {
//    BST personDB;
//
//
//    personDB.insert(new Student(101, "Alice"));
//    personDB.insert(new Student(102, "Bob"));
//    personDB.insert(new Student(103, "Charlie"));
//    personDB.insert(new Student(104, "David"));
//
//
//
//    personDB.insert(new Faculty(1, "Prof. Smith"));
//    personDB.insert(new Faculty(2, "Dr. Johnson"));
//    personDB.insert(new Faculty(3, "Prof. Williams"));
//
//
//    cout << "\n--- Assigning Courses to Faculties ---\n";
//    personDB.assignCourse(1, 201);
//    personDB.assignCourse(1, 202);
//    personDB.assignCourse(2, 203);
//    personDB.assignCourse(3, 204);
//
//    cout << "\n--- Enrolling Students in Courses ---\n";
//    personDB.enrollCourse(101, 201);
//    personDB.enrollCourse(102, 202);
//    personDB.enrollCourse(101, 203);
//    personDB.enrollCourse(103, 203);
//    personDB.enrollCourse(104, 204);
//
//    cout << "\n--- Displaying All Data ---\n";
//    personDB.inorderTraversal();
//
//    cout << "\n--- Searching and Modifying (Example) ---\n";
//    Node* foundPersonNode = personDB.search(103);
//    if (foundPersonNode != nullptr) {
//        cout << "Found Person: " << foundPersonNode->data->getName() << ". Enrolling in new course 205.\n";
//        foundPersonNode->data->enrolledCourses.insertAtTail(205);
//    }
//    foundPersonNode = personDB.search(3);
//    if (foundPersonNode != nullptr) {
//        cout << "Found Person: " << foundPersonNode->data->getName() << ". Assigning new course 206.\n";
//        foundPersonNode->data->assignedCourses.insertAtTail(206);
//    }
//
//    cout << "\n--- Displaying All Data After Search/Modify ---\n";
//    personDB.inorderTraversal();
//
//    cout << "\n--- Deletion Demonstrations ---\n";
//    personDB.deleteNode(102);
//    personDB.deleteNode(1);
//    personDB.deleteNode(999);
//
//    cout << "\n--- Data After Deletion ---\n";
//    personDB.inorderTraversal();
//
//    return 0;
//}