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


