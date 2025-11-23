#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    // constructor
    Rectangle(int l, int w) : length(l), width(w) {}

    int area() {
        return length * width;
    }

    // destructor
    ~Rectangle() {
        cout << "object destroyed" << endl;
    }
};

int main() {
    Rectangle r(5, 3);
    cout << r.area() << endl;
    return 0;
}
/*
  
### What this code does (clean, raw explanation)

#### 1. `class Rectangle`

You’re defining a **custom type** just like your struct earlier, but with encapsulation — the `length` and `width` are private.
Only code *inside* the class can touch them. This is the core of OOP.

#### 2. Constructor

```cpp
Rectangle(int l, int w) : length(l), width(w) {}
```

This is basically the class’s “birth function”.

When you write:

```cpp
Rectangle r(5, 3);
```

C++ sees that and says:

* create a Rectangle object
* set its length to 5
* set its width to 3

That’s the whole purpose of constructors: initialize your object cleanly and predictably.

#### 3. Member function `area()`

```cpp
int area() {
    return length * width;
}
```

You access `r.area()` because `r` is the **object**, and `area()` is its behavior.

### Output when running the program

It prints:

```
15
object destroyed
```

The `15` is the area (5×3).
The "object destroyed" comes from the destructor.

### Destructor Explained (the fun part)

```cpp
~Rectangle() {
    cout << "object destroyed" << endl;
}
```

The destructor is like the “death function”.
It runs automatically when the object goes out of scope.

When `main()` finishes, `r` dies.
C++ calls the destructor and prints the message.

In real-world programs, destructors clean up stuff:

* free memory
* close files
* close database connections
* release GPU resources
* log shutdown events

It’s your last chance to handle cleanup.

### What this code teaches you (and why it matters)

You just built your first example of proper OOP in C++:

* A private data model
* A constructor for initialization
* Functions that operate on the internal state
* A destructor for cleanup
* An object instance interacting with its own data

This is the foundation for:

* Game objects
* UI widgets
* Network connections
* Database models
* Smart home devices
* Any real-world system with structure + behavior

Rectangle is small, but the pattern is everything.

Once you combine this with pointers, references, and dynamic memory…
that’s when you enter **real C++ territory**, not the “cout << ‘Hello’ ” playground.

*/