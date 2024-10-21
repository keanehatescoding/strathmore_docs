When one class borrows the attributes and behavior of another class.
1. Parent/ Super class = class that is inherited from
2. Child/ Sub class that inherits 
## Parent class
Class name = Person
__Attributes__
name
id number
birth certificate number
gender
__Methods__
eat
sleep
work
relax
## Child class
Class name = Child
__Attributes__
name 
birth certificate number
__methods__
cry
play
sleep 
eat
```java
Person Kelvin = new Person();
Kelvin.idNumber = 189989
Kelvin.bcNumver = 203434
Kelvin.sex = 'M'
Kelvin.eat();
Kelvin.work();
Kelvin.relax();


Child Atina = new Child();
Atina.idNumber = 989989
Atina.bcNumver = 903434
Atina.sex = 'F'
Atina.eat();
Atina.cry();
Atina.relax();
```
To inherit the members of a parent class we use the __extend__ keyword e.g.
```java
Public class Person {
String name;
Integer idNumber;
Integer name;
}
Fadhili extends Person {
void speak (String name){
	System.out.println("Hello"+name)
}
}
```