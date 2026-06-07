1. Like many other languages generic arrays are immutable. This means you can neither add nor remove elements in an generic array. So when we try to any array operations that adds or removes elements to our array then we get a compilation error. To perform array manipulation like adding elements or remove or change elements in an array we use the ArrayList<> data type which we can perform array manipulation i.e.
2. Furthermore generic arrays can only store primitive data types, arrayLists can store objects and primitive data types. This leads to interesting behavior. We put the data type that we want to store in our arraylist inside the <> marks
## Methods of ArrayList
To add an object/ data type to an array  then ->
```java
ArrayList<goods> bag = new ArrayList<>();
bag.add("Water");
bag.add("Shampoo");
```
