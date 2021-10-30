package mypack2;

class mp2{
    public void fun1(){
        System.out.println("mypack2 class mp2 public fun called!");
    }
    private void fun2(){
        System.out.println("mypack2 class mp2 private fun called!");
    }
}

public class pck2{
    public void main() {
        System.out.println("This is pck2!");
        mp2 o1 = new mp2();
        o1.fun1();
    }
}