This is when one class borrows(inherits) the attributes and methods of another class.
1. __Parent/ Super class__ is class that was lends its attributes and methods.
2. __Child/ Sub class__ is that borrows the attributes and methods.
Inheritance also comes in the form of [[Overriding vs Overloading|function overriding]].
## Parent class
Class name = Person
__Attributes__
name
id number
birth certificate number
gender
__Methods__
eat()
sleep()
work()
relax()
## Child class
Class name = Child
__Attributes__
name <- which has been inherited from the Person class
welght
__Methods__
eat() <- which has been inherited from the Person class
cry()
play()
sleep()
```java
public class Person {
	public Integer idNumber;
	public Integer bcNumber;
	public char sex;
	public void eat(Integer food){
	// ...
	}
	public Integer work(Integer time){
		//...
		return income;
	}
	public Boolean relax(Int time){
		// ...
		return satisfied;
	}
}
```
To inherit the members of a parent class we use the __extend__ keyword e.g.
```java
public class Child extends Person{
	public void cry(Integer time){
		// ...
		return time_wasted;
	}
}
public class Main{
	public static void main(String[] args){
		Person Kelvin = new Person();
		Kelvin.idNumber = 189989
		Kelvin.bcNumver = 203434
		Kelvin.sex = 'M'
		Kelvin.eat(300);
		Kelvin.work(8);
		Kelvin.relax(5);
		Child Atina = new Child();
		Atina.idNumber = 989989
		Atina.bcNumver = 903434
		Atina.sex = 'F'
		Atina.eat(300);
		Atina.cry(20);
		Atina.relax(12);
	}
}
```

If a class has private attributes and you have inherited from it you use the super keyword when assigning attributes and methods to it's attributes 
Java does not implement multiple inheritance because they did not want to face the diamond problem. The diamond problem is when a class inherits from two or more classes. But let's day the classes have different implementations of a function or attribute. This could lead to to conflicts.
Instead of pure multiple inheritance we can use interfaces or a class and an interface i.e
```java
public class Animal {
	
}
public interface Cat {

}
public class Animal {

}