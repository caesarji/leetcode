interface A{
    void f();
}
interface B{
    void fun();
}
class C implements A,B{
    public void f(){
        System.out.println("Hello from f");
    }
    public void fun(){
        System.out.println("Hello from fun");
    }
};
class Multiple{
    public static void main(String agrs[]){
        C b1 = new C();
        b1.f();
        b1.fun();
    }
};