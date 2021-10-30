class MethodOverloading{
    int a,b;
    String s;
    MethodOverloading(int a,int b,String s){
        this.a=a;
        this.b=b;
        this.s=s;
    }
    void print(int a,int b){
        System.out.println(a+b);
    }
    void print(String s){
        System.out.println(s);
    }
    // this will not work because there must be atleast one different paramteres from existing methods
    // void print(int a,int b){
    //     System.out.println(a+" "+b);
    // }
    public static void main(String args[]){
        MethodOverloading m = new MethodOverloading(5,6,"Hello");
        m.print(m.a,m.b);
        m.print(m.s);
    }
}
