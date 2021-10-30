package hackerearth;
 
public class hack1
{
    public static void main(String[] args)
    {
        hack4 h = new hack4();
        h.hack_method();
    }
}
class hack2
{
    protected static String hack = "hello hackerearth";
}
 
class hack3 extends hack2
{
     
}
 
class hack4 extends hack3
{   
    static void hack_method()
    {    
        hack2.hack = "hello";
        System.out.println(hack);
    }
}