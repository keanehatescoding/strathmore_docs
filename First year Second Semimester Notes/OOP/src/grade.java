public class grade {
  void main() {
    double Math, English, Kiswahili, Science, SST, CRE, avg;
    int IndexNo;
    String name, grade;

    System.out.println("Enter your Name");
    name = System.console().readLine();
    System.out.println("Enter your index number");
    IndexNo = Integer.parseInt(System.console().readLine());
    System.out.println("Enter your Math Marks");
    Math = Double.parseDouble(System.console().readLine());
    System.out.println("Enter your English Marks");
    English = Double.parseDouble(System.console().readLine());
    System.out.println("Enter your Kiswahili Marks");
    Kiswahili = Double.parseDouble(System.console().readLine());
    System.out.println("Enter your Science Marks");
    Science = Double.parseDouble(System.console().readLine());
    System.out.println("Enter your SST Marks");
    SST = Double.parseDouble(System.console().readLine());
    System.out.println("Enter your CRE Marks");
    CRE = Double.parseDouble(System.console().readLine());

    avg = (Math + Kiswahili + Science + SST + CRE) / 5;

    if (avg > 80 && avg < 100)
      grade = "A";
    else if (avg > 75)
      grade = "A-";
    else if (avg > 70)
      grade = "B+";
    else if (avg > 65)
      grade = "B";
    else if (avg > 60)
      grade = "B-";
    else if (avg > 55)
      grade = "C+";
    else if (avg > 50)
      grade = "C";
    else if (avg > 45)
      grade = "C-";
    else if (avg > 40)
      grade = "D";
    else if (avg < 40 && avg > 0)
      grade = "E";
    else
      grade = "Invalid Input";

    System.out.println(name + " " + IndexNo + " average is: " + avg + " and your grade is " + grade);
  }
}
