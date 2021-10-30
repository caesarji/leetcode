abstract class Person { 
    String name; 
    String email; 
Person(String name, String mail) 
    { 
        this.name = name;         email = mail; 
    } 
    void showPersonInfo() 
    { 
System.out.println("Name : " + name); 
System.out.println("Email : " + email); 
    } 
    abstract void showMarks(); 
} 

class Student extends Person {     int marks; 
Student(String name, String email, int i){         super(name, email);         marks = i;       
    }    

    void showMarks() 
    { 
showPersonInfo(); 
System.out.println("marks : " + marks); 
    } } 

abstract class DetainedStudents extends Person 
{ 
    String reason; 
DetainedStudents(String name, String email, String reason) 
    { 
super(name, email);         this.reason = reason; 
    } } 

class Abstract 
{ 
    public static void main(String args[]) 
    { 
        Person a = new Student("Siddhant Gupta", "siddhant.cs.19@nitj.ac.in", 10);         a.showMarks(); 
    } }
