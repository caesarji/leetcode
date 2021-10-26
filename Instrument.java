public class Instrument {
    public static void main(String args[]) {
        Iron ir = new Plastic();
        // Iron ir = new Plastic();
        Wood wo = (Wood) ir;
        System.out.println(ir.Smooth());
    }
}

class Iron {
    
    private int Hard() {
        System.out.println("inside iron Hard");
        return 1;
    }
    
    public int Smooth() {
        System.out.println("inside iron Smoooth ");
        return 2;
    }
}

class Wood extends Iron {
    
    private int Hard() {
        System.out.println("inside wood hard");
        return 3;
    }
    
    public int Smooth() {
        System.out.println("inside wood smooth ");
        return Hard();
    }
}

class Plastic extends Wood {
    
    public int Hard() {
        System.out.println("inside plastic hard");
        return 4;
    }
}