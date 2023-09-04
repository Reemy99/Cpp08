# CONTAINERS

**Sequence Containers:** are data structures that maintain the order of elements as they are inserted

1. vector: a dynamic array that can grow or shrink in size.

1. list: a doubly-linked list where elements can be inserted or removed at any position efficiently.


**Associative Containers:** store data in a sorted order and allow for efficient lookup and retrieval of elements based on their keys.

1. set: a container that stores unique elements in a sorted order.

1. map: a container that stores key-value pairs in a sorted order based on keys.



_____________________________________________
## VECTORS

In C++98, vectors are part of the Standard Template Library (STL) and are implemented as a dynamic array. They provide a convenient way to work with arrays of elements that can grow or shrink in size dynamically.

1) **Include the Header File:**
To use vectors in your C++98 code, you need to include the <vector> header.

        #include <vector>

2) **Vector Declaration and Initialization:**
    You can declare and initialize a vector in several ways:

       std::vector<int> myVector; // Declare an empty vector
       std::vector<int> myVector = {1, 2, 3, 4, 5}; // Initialize a vector with specific values:
       std::vector<int> myVector(5); // Creates a vector with 5 elements, all initialized to 0
3) **Adding Elements:**
   You can add elements to the end of a vector using the push_back method:

       myVector.push_back(6);

4) **Accessing Elements:**
   You can access vector elements using the subscript operator ([]) or the at() method:

       int element = myVector[2]; // Access the third element (index 2)
        int element2 = myVector.at(3); // Access the fourth element (index 3)
5) **Vector Size:**
    You can find the number of elements in a vector using the size() method:

       int size = myVector.size();

6) **Iterating Over a Vector:**
  You can use loops to iterate over the elements of a vector:

        for (int i = 0; i < myVector.size(); ++i) {
            // Access myVector[i]
        }
7) **Removing Elements:**
    To remove elements from a vector, you can use the pop_back method to remove the last element:

       myVector.pop_back();

_____________________________________________
## LISTS

1) **Include the Header File:**

           #include <list>

2) **List Declaration and Initialization:**

           std::list<int> myList; //Declare an empty list
           std::list<int> myList = {1, 2, 3, 4, 5}; //Initialize a list with specific values:



3) **Adding Elements:**

        myList.push_back(6); //adds an element to the end of the list
        myList.push_front(0); //adds an element to the beginning of the list:


4) **Accessing Elements:** You can access elements in a list using iterators. list provides bidirectional iterators, allowing you to traverse the container in both directions.

        std::list<int>::iterator it = myList.begin();
        while (it != myList.end())
        {
            int element = *it;
                    // Process the element
            ++it;   // Move to the next element
        }

5) **Removing Elements:**

        myList.pop_back(); // Remove the last element
        myList.pop_front(); // Remove the first element


6) **Inserting and Erasing Elements:** allows you to insert elements at a specific position using the insert method and remove elements at a specific position using the erase method.
   
        std::list<int>::iterator it = myList.begin();
        ++it;                         // Move to the second element
        myList.insert(it, 7);         // Insert 7 before the second element

7) **List Size:**

        int size = myList.size();





