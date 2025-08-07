Java Database Connector or simply JDBC is an api that enables you to connect your java program to a dbms. First search for your jdbc connector for the dbms you are using. Install the jar file or just add the dependency in your pom.xml and sync i.e say you are using maven and it automatically downloads it .

When working with jdbc the following six steps must be followed: 
1. Load the jdbc into memory in order to establish a connection with the db. i.e.
```java
Class.forName("com.<db_your_using>.cj.jdbc.Driver>
```
2. Establish a db connection.
```java
String url = "jdbc:<db_your_using>://localhost:<port_number>/<db_name>";
String username = "<your_db_user's_username>";
String password = "<your_db_user's_password>";
DriveManager.getConnection();
Connection conn = DriverManager.getConnection(url,username,password);
```
3. Create a statement
```java
Statement statement = conn.createStatement();
```
4. Execute the statement
```java
executeQuery() // for queries that return a set
executeUpdate() // for queries that update, insert, delete or DDL
execute() // for queries that return a boolean
```
Say for executing a query to return all users
```java
ResultSet resultSet = statement.executeQuery("SELECT * FROM Users");
```
5. Close the resource
After you are done with your query then close the resource.
```java
resultSet.close();
statement.close();
conn.close();
```
6. Define the how to handle exceptions
To avoid the program crashing when unexpected input of in the event of edge cases.
