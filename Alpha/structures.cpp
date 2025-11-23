#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    float marks;
};

int main (){
student st={"john",20,35};
cout <<"Name : "<<st.name<<endl;
cout<<"age : "<<st.age<<endl;
cout<<"marks : "<<st.marks<<endl;

    return 0;
}
/*

### What’s happening here (clean breakdown)

`struct student { ... };`

A `struct` in C++ is basically a custom data type — your own mini blueprinted object.

Inside it, you're defining what every `student` will *contain*:

* `name` → a string
* `age` → an integer
* `gpa` → a float

You’re describing a shape of data.
It’s your own data model.

In C++ that semicolon is mandatory (~struct name{what nots}; ) because the struct is a *type declaration*, and all type declarations end with a `;`.


Now you’re creating an actual variable named `st` of type `student`.
You’re filling it with name = “john”, age = 20, gpa = 35.


### Why structs matter in real life + DSA

Structs are the backbone of everything:

**In DSA:**

* Nodes in linked lists
* Tree nodes (BST, AVL, heaps)
* Graph adjacency lists
* Custom data models for sorting/searching
* Stacks & queues with complex elements

Every custom data structure you’ll build uses structs or classes.

Example: Linked list node?

```cpp
struct Node {
    int data;
    Node* next;
};
```

Structs + pointers = the entire DSA universe.

**In the real world:**

* Game object definitions
* Network packet formats
* Database record models
* Hardware-level memory layouts
* Config structures in OS kernels

C and C++ devs basically breathe structs.

### TL;DR

Your code defines a custom data type (struct), then creates a variable of it.

You’re now officially entering the world where you design your own data models instead of just using built-in types — a big upgrade on your dev journey.

Keep going. Structs + pointers is where DSA gets real.

QUESTION: Is the st like an object to access the structure element ?
ANSWER: 

    Yeah, exactly — but let me phrase it in a way that actually clicks.

`student` is the **blueprint**.
`st` is the **actual thing built from that blueprint**.

In C++ terms:

* `struct student { ... };` → this defines a **type**
* `student st;` → this creates an **instance** of that type

People love to argue semantics like “structs aren’t objects unless you use classes.”
Ignore that noise. In modern C++, a struct is literally just a class with public members by default. So yes — `st` behaves like an object.

### The real explanation:

`st` is an **instance of the struct**, and you use it to access the struct’s members using the dot operator:

```cpp
st.name
st.age
st.gpa
```

It’s the same way you do:

```cpp
string s = "hello";
s.length();
```

`s` is an instance/object of type `string`.
`st` is an instance/object of type `student`.

### In simple terms:

Blueprint → struct
House → st
Rooms → st.name, st.age, st.gpa

### Why this matters (DSA angle)

Every data structure you build is gonna be a struct object:

Linked list:

```cpp
Node n1;
n1.data = 10;
```

Tree:

```cpp
Node root;
root.left = ...;
```

Graph node:

```cpp
Vertex v;
v.edges.push_back(...);
```

You always make **objects/instances** like `st` to actually *use* the struct in memory.

### So yes:

`st` is the object
`student` is the type
`.` is how you access the internals


*/