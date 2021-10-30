class ExceptionArray {
    public static void main(String args[]) {
        int a[] = { 1, 2, 3, 4, 5 };
        try {
            for (int i = 0; i < 10; i++) {
                System.out.print(a[i] + " ");
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("\nThe exception: \"" + e + "\" caught!");
            System.out.println("Array has no more elements!");
        }
    }
}
