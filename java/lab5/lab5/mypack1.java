package mypack1;

class mp1{
    public void fun1(){
        System.out.println("mypack1 class mp1 public fun called!");
    }
    private void fun2(){
        System.out.println("mypack1 class mp1 private fun called!");
    }
}

public class pck1{
    public void main() {
        System.out.println("This is pck1!");
        mp1 o1 = new mp1();
        o1.fun1();
    }
}