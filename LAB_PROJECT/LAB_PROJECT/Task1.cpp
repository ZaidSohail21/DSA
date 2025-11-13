#include <iostream>
#include <string>
using namespace std;

struct DLLNode
{
    int data;
    DLLNode* next;
    DLLNode* prev;

    DLLNode(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class myDLL
{
    DLLNode* head;
    DLLNode* tail;

public:
    myDLL() : head(nullptr), tail(nullptr) {}

    ~myDLL()
    {
        DLLNode* current = head;

        while (current != nullptr)
        {
            DLLNode* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
        tail = nullptr;
    }

    bool isEmpty() const
    {
        return head == nullptr && tail == nullptr;
    }

    void insertAtTail(int value)
    {
        DLLNode* nn = new DLLNode(value);

        if (isEmpty())
        {
            head = nn;
            tail = nn;
        }
        else
        {
            nn->prev = tail;
            tail->next = nn;
            tail = nn;
        }
    }

    void insertAtHead(int value)
    {
        DLLNode* nn = new DLLNode(value);

        if (isEmpty())
        {
            head = nn;
            tail = nn;
        }
        else
        {
            nn->next = head;
            head->prev = nn;
            head = nn;
        }
    }

    int deleteFromHead()
    {
        if (isEmpty())
        {
            cout << "List is empty" << endl;
            return NULL;
        }
        int retVal = head->data;

        if (head == tail)
        {
            delete head;
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            DLLNode* temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
        }
        return retVal;
    }

    int deleteFromTail()
    {
        if (isEmpty())
        {
            std::cout << "List is empty" << endl;
            return NULL;
        }
        int retVal = tail->data;

        if (head == tail)
        {
            delete tail;
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            DLLNode* temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
        }
        return retVal;
    }

    bool deleteValue(int value)
    {
        if (isEmpty())
        {
            return false;
        }
        else if (head == tail)
        {
            if (head->data == value)
            {
                delete head;
                head = nullptr;
                tail = nullptr;

                return true;
            }
            else
            {
                return false;
            }
        }
        else if (head->data == value)
        {
            deleteFromHead();
            return true;
        }
        else if (tail->data == value)
        {
            deleteFromTail();
            return true;
        }
        else
        {
            DLLNode* temp = head->next;

            while (temp != nullptr && temp != tail)
            {
                if (temp->data == value)
                {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;

                    delete temp;
                    return true;
                }
                temp = temp->next;
            }
            return false;
        }
    }

    void displayFromHead() const
    {
        if (isEmpty())
        {
            cout << "None";
        }
        else
        {
            DLLNode* temp = head;

            while (temp != nullptr)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
    }

    void displayFromTail() const
    {
        if (isEmpty())
        {
            cout << "None";
        }
        else
        {
            DLLNode* temp = tail;
            while (temp != nullptr)
            {
                cout << temp->data << " ";
                temp = temp->prev;
            }
        }
    }
};

class Person
{
protected:
    string name;
public:
    myDLL enrolledCourses;
    myDLL assignedCourses;

    Person(string n) : name(n) {}
    virtual int getID() const = 0;

    virtual void display() const
    {
        cout << "Name: " << name << ", ID: " << getID();
        cout << endl;
        cout << "  Enrolled Courses: ";

        enrolledCourses.displayFromHead();

        cout << endl;
        cout << "  Assigned Courses: ";

        assignedCourses.displayFromHead();

        cout << endl;
        cout << "----" << endl;
    }

    string getName() const
    {
        return name;
    }
};

class Student : public Person
{
public:
    int studentID;

    Student(int id, std::string n) : Person(n), studentID(id) {}

    int getID() const override
    {
        return studentID;
    }

    void display() const override
    {
        cout << "Student ";
        Person::display();
    }
};

class Faculty : public Person
{
public:
    int facultyID;

    Faculty(int id, std::string n) : Person(n), facultyID(id) {}

    int getID() const override
    {
        return facultyID;
    }

    void display() const override
    {
        cout << "Faculty ";
        Person::display();
    }
};

struct Node
{
    Person* data;
    Node* leftChild;
    Node* rightChild;

    Node(Person* val) : data(val), leftChild(nullptr), rightChild(nullptr) {}
};

class Tree
{
protected:
    Node* root;
public:
    Tree();
    virtual void insert(Person* value) = 0;
    virtual ~Tree();
};

Tree::Tree()
{
    root = nullptr;
}

Tree::~Tree() {}

class BST : public Tree
{
private:

    Node* insertRecursive(Node* node, Person* value);
    Node* searchRecursive(Node* node, int id) const;
    void inorderRecursive(Node* node) const;
    Node* findMin(Node* node);
    Node* deleteNodeRecursive(Node* node, int id);
    void deleteTreeNodes(Node* node);

public:
    BST() : Tree() {}
    ~BST() override;

    void insert(Person* value) override;
    Node* search(int id) const;
    void inorderTraversal() const;
    bool deleteNode(int id);

    void enrollCourse(int personID, int courseID);
    void assignCourse(int personID, int courseID);
};

Node* BST::insertRecursive(Node* node, Person* value)
{
    if (node == nullptr)
    {
        return new Node(value);
    }

    if (value->getID() < node->data->getID())
    {
        node->leftChild = insertRecursive(node->leftChild, value);
    }
    else if (value->getID() > node->data->getID())
    {
        node->rightChild = insertRecursive(node->rightChild, value);
    }
    else
    {
        cout << "ID " << value->getID() << " already exists! Cannot insert duplicate." << endl;
        delete value;
    }
    return node;
}

void BST::insert(Person* value)
{
    this->root = insertRecursive(this->root, value);
}

Node* BST::searchRecursive(Node* node, int id) const
{
    if (node == nullptr)
    {
        return nullptr;
    }

    if (node->data->getID() == id)
    {
        return node;
    }
    else if (id < node->data->getID())
    {
        return searchRecursive(node->leftChild, id);
    }
    else
    {
        return searchRecursive(node->rightChild, id);
    }
}

Node* BST::search(int id) const
{
    return searchRecursive(this->root, id);
}

void BST::inorderRecursive(Node* node) const
{
    if (node == nullptr)
    {
        return;
    }

    inorderRecursive(node->leftChild);
    node->data->display();
    inorderRecursive(node->rightChild);
}

void BST::inorderTraversal() const
{
    if (this->root == nullptr)
    {
        cout << "Tree is empty." << endl;
        return;
    }
    inorderRecursive(this->root);
}

Node* BST::findMin(Node* node)
{
    while (node->leftChild != nullptr)
    {
        node = node->leftChild;
    }
    return node;
}

Node* BST::deleteNodeRecursive(Node* node, int id)
{
    if (node == nullptr)
    {
        return nullptr;
    }

    if (id < node->data->getID())
    {
        node->leftChild = deleteNodeRecursive(node->leftChild, id);
    }
    else if (id > node->data->getID())
    {
        node->rightChild = deleteNodeRecursive(node->rightChild, id);
    }
    else
    {
        if (node->leftChild == nullptr)
        {
            Node* temp = node->rightChild;
            delete node->data;
            delete node;
            return temp;
        }
        else if (node->rightChild == nullptr)
        {
            Node* temp = node->leftChild;
            delete node->data;
            delete node;
            return temp;
        }

        Node* temp = findMin(node->rightChild);

        delete node->data;
        node->data = temp->data;

        node->rightChild = deleteNodeRecursive(node->rightChild, temp->data->getID());
    }
    return node;
}

bool BST::deleteNode(int id)
{
    Node* before = search(id);
    if (!before)
    {
        return false;
    }

    this->root = deleteNodeRecursive(this->root, id);
    cout << "Deleted person with ID: " << id << endl;
    return true;
}


void BST::deleteTreeNodes(Node* node)
{
    if (node == nullptr) return;
    deleteTreeNodes(node->leftChild);
    deleteTreeNodes(node->rightChild);
    delete node->data;
    delete node;
}

BST::~BST()
{
    deleteTreeNodes(this->root);
    this->root = nullptr;
}

void BST::enrollCourse(int personID, int courseID)
{
    Node* personNode = search(personID);
    if (personNode != nullptr)
    {
        personNode->data->enrolledCourses.insertAtTail(courseID);
        cout << "Enrolled course " << courseID << " for person " << personID << endl;
    }
    else
    {
        cout << "Person with ID " << personID << " not found." << endl;
    }
}

void BST::assignCourse(int personID, int courseID)
{
    Node* personNode = search(personID);

    if (personNode != nullptr)
    {
        personNode->data->assignedCourses.insertAtTail(courseID);
        cout << "Assigned course " << courseID << " to person " << personID << endl;
    }
    else
    {
        cout << "Person with ID " << personID << " not found." << endl;
    }
}

int main()
{
    BST personDB;
    int choice;

    do
    {
        cout << endl;
        cout << "===== Course Management System =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Add Faculty" << endl;
        cout << "3. Assign Course to Faculty" << endl;
        cout << "4. Enroll Student in Course" << endl;
        cout << "5. Display All Data" << endl;
        cout << "6. Search and Modify (Add Course)" << endl;
        cout << "7. Delete Person by ID" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1)
        {
            int id;
            string name;

            cout << "Enter Student ID: ";
            cin >> id;
            cin.ignore();

            cout << "Enter Student Name: ";
            getline(cin, name);

            personDB.insert(new Student(id, name));
        }
        else if (choice == 2)
        {
            int id;
            string name;

            cout << "Enter Faculty ID: ";
            cin >> id;
            cin.ignore();

            cout << "Enter Faculty Name: ";
            getline(cin, name);

            personDB.insert(new Faculty(id, name));
        }
        else if (choice == 3)
        {
            int facultyID, courseID;

            cout << "Enter Faculty ID to assign course: ";
            cin >> facultyID;

            cout << "Enter Course ID to assign: ";
            cin >> courseID;

            personDB.assignCourse(facultyID, courseID);
        }
        else if (choice == 4)
        {
            int studentID, courseID;

            cout << "Enter Student ID to enroll: ";
            cin >> studentID;

            cout << "Enter Course ID to enroll in: ";
            cin >> courseID;

            personDB.enrollCourse(studentID, courseID);
        }
        else if (choice == 5)
        {
            cout << endl;
            cout << "--- Displaying All Data ---" << endl;
            cout << endl;
            personDB.inorderTraversal();
        }
        else if (choice == 6)
        {
            int personID, courseID, type;

            cout << "Enter Person ID to search: ";
            cin >> personID;

            Node* found = personDB.search(personID);

            if (found != nullptr)
            {
                cout << "Found: " << found->data->getName() << endl;
                cout << "Enter 1 to add to Enrolled Courses or 2 for Assigned Courses: ";
                cin >> type;

                cout << "Enter Course ID: ";
                cin >> courseID;

                if (type == 1)
                    found->data->enrolledCourses.insertAtTail(courseID);
                else
                    found->data->assignedCourses.insertAtTail(courseID);
            }
            else
            {
                cout << "Person not found." << endl;
            }
        }
        else if (choice == 7)
        {
            int id;
            cout << "Enter ID to delete: ";
            cin >> id;

            if (!personDB.deleteNode(id))
            {
                cout << "Person with ID " << id << " not found." << endl;
            }
        }
        else if (choice != 0)
        {
            cout << "Invalid choice. Please try again." << endl;
        }
        
    } while (choice != 0);

    return 0;
}
// Zaid Sohail [L1F23BSCS0314]
// Ahmad Shehzad [L1F23BSCS0295]
// Basil Ahmad [L1F23BSCS0304]