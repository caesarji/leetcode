class ExceptionFactorial {
    public static void main(String[] args) {

        int n = 0,result;
        try {
            n = Integer.parseInt(args[0]);
            if (n < 0) {
                throw new Exception("No factorial exists for a negative number.");
            } else {
                int pro = 1;
                for (int i = 1; i <= n; i++){
                     pro=pro*i;
                }
                   
                System.out.println("Factorial of " + n + " = " + pro);
            }
        } catch (Exception e) {
            System.out.println("Error: " + e);
        }
    }
}
