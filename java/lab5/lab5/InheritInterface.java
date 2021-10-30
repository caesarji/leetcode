interface A{
    void f();
}
abstract class B{
    abstract void fun();
};
abstract class C extends B implements A{
    public void f(){
        System.out.println("From abstract C");
    }
    abstract void fun();
};
class D extends C{
    public void f(){
        System.out.println("I'm from extends");
    }
    public void fun(){
        System.out.println("I'm from abstract B");
    }
};
class InheritInterface{
    public static void main(String agrs[]){
        D b1 = new D();
        b1.f();
        b1.fun();
    }
};