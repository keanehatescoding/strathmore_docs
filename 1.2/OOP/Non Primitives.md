## Non Primitive types
__These are an extension to the primitive types and offer much more as compared to the primitive types.__ I.e Strings are non primitive data type of type class and offer much more i.e length() method which gives as the length of string. Some of the non primitive data types are:
1. Generic arrays i.e int[], double[], char[] and float[] arrays.
2. Strings i.e String name = "Keane"
NB: The String data type is not a array of characters i.e char[]
A string of characters is non modifiable but in a char[] you can change the elements of the array but you cannot change the size of the char[]. An character array only has methods from an array while a String has methods from the String class.
When you do make redefine a string in the background your compiler is creating a new string.
To compare arrays use the Arrays.equals() and to print out and array of characters use the String.valueOf(Array__name) method.
```java
public class Main {
	public static void main (String[] args){
		char[] name1 = { "K", "e", "a", "n", "e" };
		String name2 = "Keane";
		// Alternatively 
		String name3 = new String(name1);
		name1.equals(name2);
		System.out.println(String.valueOf(name1));
		System.out.println(name2);
		System.out.prinln(name3);
	}
}