import java.util.Scanner;

public class Whoami {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter your name");
    String name = scanner.next();
    System.out.println("Enter your gender");
    String gender = scanner.next();
    System.out.println("Hello " + name + " you are a " + gender);
    scanner.close();
  }
}
