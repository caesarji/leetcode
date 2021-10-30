class ExceptionMultiple {
    public static void main(String[] args) {
        try {
            int arr[] = new int[7];
            arr[4] = 30 / 0;
            System.out.println(arr[8]);
            System.out.println("Last Statement of try block");
        } catch (ArithmeticException e) {
            System.out.println("\nThe exception: \"" + e + "\" caught!");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("\nThe exception: \"" + e + "\" caught!");
        } catch (Exception e) {
            System.out.println("\nThe exception: \"" + e + "\" caught!");
        }
        System.out.println("After the try/catch blocks.");
    }
}
