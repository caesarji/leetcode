class childt implements Runnable{
    Thread t;
    childt(String s){
        t=new Thread(this,s);
        t.start();
    }
    public void run(){
        try{
            for(int i=0;i<10;i++){
                System.out.println(t.getName() +" "+ i);
                t.sleep(520);
            }
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
        System.out.println(t.getName() + " run is over now");
    }
};
class Ques3{
    public static void main(String args[]){
        childt c1 = new childt("child 1");
        childt c2 = new childt("child 2");
        try{
            while(c1.t.isAlive() || c2.t.isAlive()){
                System.out.println("Child threads are alive");
                Thread.sleep(1000);
            }
        }
        catch(InterruptedException e){
            System.out.println("Main thread interupted by "+e);
        }
        System.out.println("Main thread going to die");
    }
}