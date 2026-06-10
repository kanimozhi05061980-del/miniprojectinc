import java.util.Scanner;

class Person {
    String name;
    int age;

    void getPersonDetails() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Name: ");
        name = sc.nextLine();

        System.out.print("Enter Age: ");
        age = sc.nextInt();
    }
}

class Student extends Person {
    int rollNo;
    int[] marks = new int[3];
    double avg, per;

    void getStudentDetails() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Roll No: ");
        rollNo = sc.nextInt();

        for (int i = 0; i < marks.length; i++) {
            System.out.print("Enter Mark " + (i + 1) + ": ");
            marks[i] = sc.nextInt();
        }
    }

    double calavg() {
        int sum = 0;

        for (int mark : marks) {
            sum += mark;
        }

        avg = sum / (double) marks.length;
        return avg;
    }

    double calpercentage() {
        int sum = 0;

        for (int mark : marks) {
            sum += mark;
        }

        per = (sum / (marks.length * 100.0)) * 100;
        return per;
    }

    void display() {
        System.out.println("\nStudent Details");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Roll No: " + rollNo);

        for (int i = 0; i < marks.length; i++) {
            System.out.println("Mark " + (i + 1) + ": " + marks[i]);
        }

        System.out.println("Average: " + avg);
        System.out.println("Percentage: " + per + "%");
    }
}

public class stud {
    public static void main(String[] args) {
        Student s = new Student();

        s.getPersonDetails();
        s.getStudentDetails();

        s.calavg();
        s.calpercentage();

        s.display();
    }
}