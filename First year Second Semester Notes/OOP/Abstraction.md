Abstrction is hiding the implementation details of an object and exposing only the essential features and functionalities.
As classes provide blueprints for constructing objects, abstraction involves creating blueprint for creating classes.
This is achieved in two ways:
1. Abstract classes 2.
2. Interfaces.
## Abstract classes and methods
An __abstract class__ is a class may supports undefined(abstract) methods, concrete methods and generic attributes.
An _abstract method_ is a method that is undefined and is defined only after inheritance and overriding that method.
Abstract classes cannot instantiate objects. If you try the java compiler throws a cannot instantiate the type class_name. You can only inherit 
If a class inherits from a class with an abstract method then it must implement(define) the abstract methods.
An abstract class carries a constructor which will be called to create your final object.
An abstract classes carry your mutable state.
Abstract classes can have static methods.
Abstract classes are good when you have a lot of related classes that you want them to do specific things.
```java
public abstract class 
```

## Interfaces
Interfaces are a structure-like class that have static final attributes, abstract and default methods while supporting multiple interfaces being implemented in one or more classes.
__Default methods__ are concrete methods.(Have a method definition).
Interfaces are good when multiple unrelated classes share functionality or constants.
All methods are in an interfaces are assumed to be abstract so no need of using the abstract keyword when defining theses methods.
Similar to abstract classes. When inheriting from an interface with abstract methods you must override and define this method. If you don't the java compiler throws a 

### Differences

| Aspect      | Abstract Class                          | Interface                                     |
| ----------- | --------------------------------------- | --------------------------------------------- |
| Methods     | Have concrete and abstract methods      | Can have abstract, default and static methods |
| Attributes  | Can have instance variables             | Can only have static final constant           |
| Inheritance | Single inheritance                      | Multiple inheritance                          |
| Use case    | When classes share behaviour and fields | When unrelated classes share functionality    |
