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

import mypack1.pck1;
import mypack2.pck2;

class ap{
    public static void main(String[] args) {
        pck1 o1 = new pck1();
        o1.main();
        pck2 o2 = new pck2();
        o2.main();
    }
}