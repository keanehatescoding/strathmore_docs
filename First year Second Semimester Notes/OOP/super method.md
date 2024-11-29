The super reserved keyword which invokes a a special method that calls the constructor of the the immediate parent(super) class, the methods of the parent class or the attribute of the parent class.
Say we have an attribute with a similar name in a parent class and a child class i.e height
```java
class Building {
	int height = 50;
}
class Pyramid extends Building {
	int height = 1500;
	public int getHeight (){
		return height;
	}
}
```
Let's say we want to use the height of the original building in our child class then the height of our parent class, to do so we define a new method called getOriginalHeight which is different from the getHeight() method.
```java
class Pyramids extends Building {
		public int getOriginalHeight(){
			return super.height;
		}
}
public Main {
	public static void main(String[] args){
	System.out.println(new Pyramid().getHeight()):
	System.out.println(new Pyramid().getOriginalHeight());
	}
}
```
The same logic applies to methods.
Using the super method to initiate the attributes of a child class can make your code easier to write i.e
Say we have a parent class e.g.
```java
class Person {
	String name;
	Integer age;
	public Person(String name, Integer age){
		this.name = name;
		this.age = age;
	}
}	
```
Then a Student class inherits from this parent class.
```java
class Student extends Person{
	Integer adNo;
	public Person(String name, Integer age, Integer adNo){
		super(name, age);
		this.adNo = adNo;
	}
}
```
Instead of writing this.name = name and this.age = age we have quickly used the super constructor of the parent class to reduce this to a one liner.
__NB:__ The super method cannot be used within a static context i.e
```java
public static void Person(String name, Integer age, Integer adNo){
	super(name, age);
	this.adNo = adNo;
	}
```
The above code won't compile and throws a "explicit constructor invocation may only appear within a constructor body".