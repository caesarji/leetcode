// package college;

class MyThread implements Runnable {
	String name;
	Thread t;

	MyThread(String n) {
		name = n;
		t = new Thread(this, name);
		System.out.println("New Thread: " + t);
		t.start();
	}

	public void run() {
		try {
			for (int i = 2; i >= 1; i--) {
				System.out.println(name + " : " + i);
				Thread.sleep(1000);
			}
		} catch (InterruptedException e) {
			System.out.println(name + " InterruptedException");
		}
		System.out.println(name + " terminated");
	}
};

 class prog3 {
	public static void main(String[] args)
	{
		
		new MyThread("Child Thread 1");
		new MyThread("Child Thread 2");
		System.out.println(" Inside Main thread");

		try
		{
			Thread.sleep(3000);
		}
		catch (InterruptedException e)
		{
			System.out.println("Main thread is interrupted");
		}

        
		System.out.println("Main thread terminated");
	}
};

