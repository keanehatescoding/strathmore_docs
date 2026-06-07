A mechanism by which a class limits/allows access of its attributes and methods(members) by other classes through the use of access modifiers.
In java we have 4 types of access modifiers
1. Public
2. Private
3. Protected
4. Default
#Private - allows only access in current class.
#Public -allows access not only in the current class but other class.
#Protected - allows access within the parent class and sub classes
#Default - allows access within the 
# Effect of access modifiers of various concepts
1. Inheritance: It does not affect inheritance and access is limited
2. Polymorphism: Creates a conflict e.g. cannot modify a private member
3. 

| Animal                                 |                              |
| -------------------------------------- | ---------------------------- |
| - name<br># sex<br>+ age<br>license no | string<br>char<br>int<br>int |
| - sound()<br>+ movement()              | void <br>moderate            |


| Dog extends Animal |
| ------------------ |
| sound() -bark      |


| Main       |     |
| ---------- | --- |
| + x:Animal |     |
x can access age x only since only the age attribute is public
 