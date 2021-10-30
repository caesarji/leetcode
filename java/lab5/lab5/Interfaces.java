interface A{
    void f();
}
class B implements A{
    public void f(){
        System.out.println("Hello from B");
    }
};
class Interfaces{
    public static void main(String agrs[]){
        B b1 = new B();
        b1.f();
    }
};