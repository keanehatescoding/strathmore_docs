This is when you modify an inherited method/behaviour or you define a method with a specific parameter(s) and redefine it with different parameters or return type.
This is done through method overloading.
The keyword is override

| Person             |
| ------------------ |
| Complexion: String |
| Length : Float     |
| Address : String   |
| Provide Invoice()  |

| Customer extends Person |
| ----------------------- |
| address  :String        |
| talk() -overide         |

## Significance of Polymorphism 
1. Enables code re-usability i.e by creating abstract classes and interfaces and this templates can be used to create various classes. 
2. Improves maintainability through abstract methods which have different implementations in different classes. i.e When calling a Dog object you don't expect it to meow.
3. Enables abstraction which enables programmmers to focus on "what" programs do rather than "how".