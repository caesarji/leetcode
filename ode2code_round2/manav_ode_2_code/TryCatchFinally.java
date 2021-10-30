class TryCatchFinally {
    public static void main(String[] args) {

        try {
            try {
                try {
                    int arr[] = { 1, 2, 3, 4 };
                    System.out.println(arr[10]);
                } catch (ArithmeticException e) {
                    System.out.print("\nThe exception: \"" + e + "\" caught and");
                    System.out.println(" handled in try-block3");
                } finally {
                    System.out.println("finally in try-block3");
                }
            } catch (ArithmeticException e) {
                System.out.print("\nThe exception: \"" + e + "\" caught and");
                System.out.println(" handled in try-block2");
            } finally {
                System.out.println("finally in try-block2");
            }
        } catch (ArithmeticException e3) {
            System.out.print("\nThe exception: \"" + e3 + "\" caught and");
            System.out.println(" handled in main try-block");
        } catch (ArrayIndexOutOfBoundsException e4) {
            System.out.print("\nThe exception: \"" + e4 + "\" caught and");
            System.out.println(" handled in main try-block");
        } catch (Exception e5) {
            System.out.print("\nThe exception: \"" + e5 + "\" caught and");
            System.out.println(" handled in main try-block");
        } finally {
            System.out.println("finally in main try-block");
        }
    }
}
