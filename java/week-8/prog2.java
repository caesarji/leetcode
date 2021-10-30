// package college;

class MatrixMul extends Thread 
{
	public void run() 
	{
		System.out.println("Thread 1: Thread to multiply two 3*3 matrices\n");
		int a[][] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
		int b[][] = { { 1, 6, 9 }, { 3, 7, 0 }, { 4, 8, 5 } };
		int c[][] = new int[3][3];
		System.out.println("Multiplication:\n");
		for (int i = 0; i < 3; i++) 
		{
			for (int j = 0; j < 3; j++) 
			{
				c[i][j] = 0;
				for (int k = 0; k < 3; k++) 
				{
					c[i][j] += a[i][k] * b[k][j];
				}
				System.out.print(c[i][j] + " ");
			}
			System.out.println();
		}
	}
};

class CountPrimes extends Thread 
{
	public void run() 
	{
		System.out.println("Thread 2: Thread to find prime numbers from 1 to 100000. \n");
		int count;
		int final_count = 0;
		for (int i = 1; i <= 100000; i++) 
		{
			count = 0;
			for (int j = 2; j <= i / 2; j++) 
			{
				if (i % j == 0) 
				{
					count++;
					break;
				}
			}
			if (count == 0 && i != 1) 
			{
				final_count++;
			}
		}
		System.out.println("Number of Prime Numbers from 1 to 100000 are : " + final_count);
	}
};

class GCD extends Thread 
{
	static int gcd(int a, int b) 
	{
		if (a == 0)
			return b;
		return gcd(b % a, a);
	}
	public void run() 
	{	
		System.out.println("Thread 3: Thread to find GCD of an integer array.\n");
		int arr[] = { 2, 4, 6, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192 };
		int n = arr.length;
		int result = arr[0];
		for (int i = 1; i < n; i++)
			result = gcd(arr[i], result);
		System.out.println("GCD of integers in array is : " + result);
	}
};

public class prog2 {
	public static void main(String[] args)
	{
		
		CountPrimes thread2 = new CountPrimes();
		thread2.start();
		GCD thread3 = new GCD();
		thread3.start();
		MatrixMul thread1 = new MatrixMul();
		thread1.start();
	}
};
