__Overloading__ is the same method with different number of parameters while __overriding__ is the redefinition of a method from a superclass in a subclass.
Overriding has to do with inheritance while overloading does not use inheritance.
Overriding is resolved at runtime while overloading is resolved at compile time.
To prevent a method from being overridden declare it as final, static or private.

## Rules when overriding a method
1. An overriden method should have the name, parameters and return type of method in it's superclass.
2. A method cannot have a stricter access than it's the method it was overriden from i.e overriding a public method and making it a private method is not permitted.
3. If a method throws an exception in it's implementation, the inherited and overriden implementation of this method cannot throw a new or broader checked exception than the parent method.
4. [[Static|Static]] ,[[Final|final]] or private methods cannot be overidden
Static methods can be hidden (using the same method signature in the subclass) but cannot be overriden because they are class-level methods and are not associated with any instance while private methods are not even visible in the child class hence cannot be overriden.