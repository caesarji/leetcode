class Multimat extends Thread{
    Multimat(){
        System.out.println("Matrix multiplication thread: ");
        start();
    }
    public void run(){
        int n=4,m=3,x=3,y=4;
        int a[][] = { { 1, 1, 1 },
                      { 2, 2, 2 },
                      { 3, 3, 3 },
                      { 4, 4, 4 } };
  
        int b[][] = { { 1, 1, 1, 1 },
                      { 2, 2, 2, 2 },
                      { 3, 3, 3, 3 } };
        
        int c[][] = new int[n][y];
        for(int i=0;i<n;i++){
            for(int j=0;j<y;j++){
                for(int k=0;k<m;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<y;j++){
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
    }
}
class prime extends Thread{
    prime(){
        System.out.println("Prime number thread");
        start();
    }
    boolean thisprime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    public void run(){
        int count=0;
        for(int i=1;i<=100000;i++){
            if(thisprime(i)){
                System.out.println("Prime ->"+i);
                count++;
            }
        }
        System.out.println("Total Primes= "+count);
    }
}
class Gcd extends Thread{
    Gcd(){
        System.out.println("GCD thread");
        start();
    }
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    public void run(){
        int a=12556,b=6458;
        System.out.println("Gcd of "+a+" and "+b+" is ="+gcd(a,b));
    }
}
class Ques2{
    public static void main(String agrs[]){
        new Multimat();
        new Gcd();
        new prime();
    }
}