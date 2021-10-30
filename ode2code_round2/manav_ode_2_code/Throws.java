import java.io.IOException;
class Throws
{
void temp1() throws IOException
{
System.out.println("Inside temp1");
throw new IOException("IOException");
}
public static void main(String[] args)
{
Throws obj=new Throws();
obj.temp1();
System.out.println("End of main");
}
//If the exception is not handled, the compile time error occurs as shown below in output (a).
//We need to write a try-catch block that will handle the exception which is show in code (b) and output (b).
}
