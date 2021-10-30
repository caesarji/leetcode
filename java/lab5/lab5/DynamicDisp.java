abstract class A{
    String s;
    A(String c){
        s=c;
        System.out.println("Constructor of A");
    }
    abstract void f();
};
abstract class B extends A{
    B(String c){
        
        super(c);
        s=c;
        System.out.println("Constructor of B");
    }
    abstract void f();
};
class C extends B{
    C(String s1){
        
        super(s1);
        s=s1;
        System.out.println("Constructor of C");
    }
    void f(){
        System.out.println("String is-> "+s);
    }
};
class DynamicDisp{
    public static void main(String args[]){
        
        C c2 = new C("Check for B");
        B b1 = c2;
        b1.f();
        C c1 = new C("Check for A");
        A a1=c1;
        a1.f();
    }
};