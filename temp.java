public class Charm {

    static int var = func1();

    static int func1() {

        System.out.print(1 + " ");
        func2();
        System.out.print(2 + " ");
        return 10;
    }

    static void func2() {

        System.out.print(3 + " ");
        main(null);
        System.out.print(4 + " ");
    }

    static {
        System.out.print(5 + ":" + var + " ");
        var = 20;
        main(null);
        System.out.print(6 + ":" + var + " ");
    }

    public static void main(String[] args) {
        System.out.print(7 + ":" + var + " ");
        var = 30;
    }
}