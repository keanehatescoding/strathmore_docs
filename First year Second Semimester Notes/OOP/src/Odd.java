import java.util.Scanner;

public class Odd {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter a number less than or equal to 5");
    int num = scanner.nextInt();
    if (num > 5) {
      System.out.println("Invalid input");
      System.exit(-1);
    }
    if (num % 2 == 0) {
      System.out.println("Lucky guess");
    } else {
      System.out.println("Better luck next time");
      scanner.close();
    }
  }
}
