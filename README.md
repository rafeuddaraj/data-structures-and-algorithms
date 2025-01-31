## Array

An array is a data structure that contains a collection of elements, each identified by an array index. Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

### Memory Location

In most programming languages, arrays are stored in contiguous memory locations. This means that the elements of the array are stored one after another in memory. The memory address of the first element is known as the base address, and the address of any other element can be calculated using the base address and the size of each element.

### Array Behind the Scenes

Behind the scenes, arrays are managed by the programming language's runtime system. When an array is created, the runtime system allocates a block of memory large enough to hold all the elements of the array. The size of this block is determined by the number of elements in the array and the size of each element.

### Array Operations

Common operations on arrays include:

- **Accessing Elements**: You can access an element of an array by using its index. For example, `array[0]` accesses the first element of the array.
- **Modifying Elements**: You can modify an element of an array by assigning a new value to it using its index. For example, `array[0] = 10` sets the first element of the array to 10.
- **Iterating Over Elements**: You can iterate over the elements of an array using loops. For example, a `for` loop can be used to iterate over all the elements of an array.
- **Array Length**: You can get the length of an array, which is the number of elements it contains. This is often done using a built-in function or property, such as `array.length`.

Arrays are a fundamental data structure in computer science and are used in a wide variety of applications.