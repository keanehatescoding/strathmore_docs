__Encapsulation__ refers to putting data in access modifiers in order to protect data from being modified by other classes or make it public/protected so other classes may use it.
To get the value of a private attribute we use the get method.
Say we have a class with a private attribute social security number to get this method use the following code: 
```java
public class Person{
	private int snn = 0284930;
	
	// get a private attribute
	public getSnn(){
		return Snn;
	}
	public static void main (String args[]{
		Person kelvin = new Person();
		System.out.println(kelvin.getSnn());
	}
}
```
To set a private attribute we use set methods/setter methods. Say we have a private age and we want to modify it 
```java 
public class Person{
	private int age;
	// set a private attribute
	public setAge(int age){
		this.age = age;
	}
	public static void main (String[] args){
		Person Claudia = new Person();
		Claudia.setAge(21);
	}
}
