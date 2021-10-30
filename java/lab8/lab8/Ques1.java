class pali implements Runnable {
    Thread t;
    pali(String name){
        t=new Thread(this,name);
    }
    public void run(){
        System.out.println("thread is created ");
    }
    boolean check(int n){
        int rev=0,r;
        int cur=n;
        while(n>0){
            r=(n%10);
            rev=rev*10+r;
            n/=10;
        }
        if(rev==cur){
            System.out.print(t.getName()+" Thread -> ");
            return true;
        }
        return false;
    }
};
class Ques1{
    public static void main(String agrs[]){
        pali p1 = new pali("First");
        pali p2 = new pali("Second");
        for(int i=1;i<=100;){
            if(p1.check(i)) System.out.println(i);
            if(p2.check(i+1)) System.out.println(i+1);
            i=i+2;
        }
    }
};