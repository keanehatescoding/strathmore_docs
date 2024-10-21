A special method that is used to initialize (assign values) to attributes of a class
## Format
1. Sames names as classes
2. No return type
3. Parameter list types must match the attribute types
* Constructors are never inherited
```java
public class Animal {
	// declare the attributes
	String name;
	integer licenseNo;
	String breed;

	 // creating the constructor
	Public Animal(String name, integer licenseNo, String breed){
		name = name;
		integer = licenseNo;
		breed = breed;
	}
	

	public static void main(String args[]){
		// Creating a object and initializing the attribues
		Animal Dog = new Animal("Snowy", 1284182, "Japanesse Splits")
		Animal CAt = new Animal("Chelsea", 1084040, "Scottish fold")
	}
}
```