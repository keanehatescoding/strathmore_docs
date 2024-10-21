public class Q1 {
  public static void main(String[] args) {
    String name, gender;
    System.out.println("Enter your name please");
    name = System.console().readLine();
    gender = System.console().readLine();
    System.out.println("My name is " + name + " and I am a " + gender);
  }
}
