# CONTAINERS

**Sequence Containers:** are data structures that maintain the order of elements as they are inserted

1. vector: a dynamic array that can grow or shrink in size.

1. list: a doubly-linked list where elements can be inserted or removed at any position efficiently.


**Associative Containers:** store data in a sorted order and allow for efficient lookup and retrieval of elements based on their keys.

1. set: a container that stores unique elements in a sorted order.

1. map: a container that stores key-value pairs in a sorted order based on keys.



_____________________________________________
## VECTORS

1) **Include the Header File:**
        #include <vector>

2) **Vector Declaration and Initialization:**
   
       std::vector<int> myVector; // Declare an empty vector
       std::vector<int> myVector = {1, 2, 3, 4, 5}; // Initialize a vector with specific values: (in C++11)
       std::vector<int> myVector(5); // Creates a vector with 5 elements, all initialized to 0
4) **Adding Elements:**

       myVector.push_back(6); //add elements to the end of a vector
5) **Accessing Elements:**
   
       int element = myVector[2]; // Access the third element (index 2)
        int element2 = myVector.at(3); // Access the fourth element (index 3)
7) **Vector Size:**

       int size = myVector.size();
8) **Iterating Over a Vector:**
  You can use loops to iterate over the elements of a vector:

        for (int i = 0; i < myVector.size(); ++i) {
            // Access myVector[i]
        }
9) **Removing Elements:**
    To remove elements from a vector, you can use the pop_back method to remove the last element:

       myVector.pop_back();

_____________________________________________
## LISTS

1) **Include the Header File:**

           #include <list>

2) **List Declaration and Initialization:**

           std::list<int> myList; //Declare an empty list
           std::list<int> myList = {1, 2, 3, 4, 5}; //Initialize a list with specific values:(in C++11)
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

_____________________________________________
## MAP
1) **Include the Header File:**

           #include <map>
2) **Map Declaration and Initialization:**

        std::map<int, std::string> myMap;                  //Declare an empty map
        std::map<int, std::string> myMap = {{1, "Sting"}}; //with specific key-value pairs:
3) Inserting Elements:

        myMap.insert(std::make_pair(4, "David")); 
        myMap[5] = "Eve";
4) Accessing Elements:

        std::string value = myMap[1]; // Access the value associated with key 1 (e.g., "string")
5) Removing Elements:

        myMap.erase(3); // Remove the key-value pair with key 3
6) Iterating Over a Map:

        std::map<int, std::string>::iterator it = myMap.begin();
        while (it != myMap.end())
        {
            int key = it->first;
            std::string value = it->second;
                    // Process the key and value
            ++it;        // Move to the next key-value pair
        }

7) Map Size:

        int size = myMap.size();
__________________________________________________

***std::distance*** Is used to calculate the distance (number of elements) between two iterators. It calculates the distance between the beginning of the list (lst.begin()) and the iterator result, which points to the found element or the end of the list.


***throw std::runtime_error:*** Is used to raise an exception that can be caught and handled in a different part of the program.
It changes the control flow of the program and transfers execution to an appropriate catch block, allowing for error recovery and handling.
It provides a structured way to handle and propagate errors in the program.

