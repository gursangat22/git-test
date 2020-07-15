A shallow copy of an object copies all of the member field values.
 This works well if the fields are values,
  but may not be what you want for fields that point to dynamically allocated memory. 
  The pointer will be copied. but the memory it points to will not be copied -- 
  the field in both the original object and the copy will then point to the same dynamically allocated memory,
   which is not usually what you want. The default copy constructor and assignment operator make shallow copies.

A deep copy copies all fields, and makes copies of dynamically allocated memory pointed to by the fields. 
To make a deep copy, you must write a copy constructor and overload the assignment operator, 
otherwise the copy will point to the original, with disasterous consequences.

Deep copies need ...
If an object has pointers to dynamically allocated memory, 
and the dynamically allocated memory needs to be copied when the original object is copied,
 then a deep copy is required.

A class that requires deep copies generally needs:

A constructor to either make an initial allocation or set the pointer to NULL.
A destructor to delete the dynamically allocated memory.
A copy constructor to make a copy of the dynamically allocated memory.
An overloaded assignment operator to make a copy of the dynamically allocated memory.
Copyleft 2004 Fred Swartz MIT License
