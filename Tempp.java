import javax.sound.sampled.SourceDataLine;

class Tempp{
        
    static int var = func1();
    // System.out.println("here");

    
    static int func1() {
        
        System.out.println("inside func1");

        System.out.println(1 + " ");
        func2();
        System.out.println(2 + " ");
        return 10;
    }
    
    static void func2() {
        System.out.println("inside func2");

        System.out.println(3 + " ");
        main(null);
        System.out.println(4 + " ");
    }
    
    static {
        System.out.println("inside static");

        System.out.println(5 + ":" + var + " ");
        var = 20;
        main(null);
        System.out.println(6 + ":" + var + " ");
    }
    
    public static void main(String[] args) {
        System.out.println("inside main");

        System.out.println(7 + ":" + var + " ");
        var = 30;
    }

}


