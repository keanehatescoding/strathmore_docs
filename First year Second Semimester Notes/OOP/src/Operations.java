import java.util.Scanner;

public class Operations {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter the first number");
    int a = scanner.nextInt();
    System.out.println("Enter the second number");
    int b = scanner.nextInt();
    System.out.println("Enter the third number");
    int c = scanner.nextInt();
    System.out.println("The sum of these 3 digits is " + (a + b + c));
    System.out.println("The product of these 3 digits is " + (a * b * c));
    System.out.println("The average of these 3 digits is " + (a + b + c) / 3);
  }
}
