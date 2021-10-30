import java.util.Scanner;
class WrongAccountException extends Exception
{
WrongAccountException()
{
super();
}
}
class InsufficientBalanceException extends Exception
{
InsufficientBalanceException()
{
super();
}
}
class Customer
{
int accNo;
String name;
int bal;
Customer()
{
}
Customer(int a, String n, int b)
{
accNo = a;
name = n;
bal = b;
}
void checkBalance(Customer[] customers)
{
for (int i = 0; i < customers.length; i++)
{
if (customers[i].bal < 100)
{
System.out.println(customers[i].accNo + "\t" + customers[i].name + "\t" +
customers[i].bal);
}
}
}
void getInfo()
{
System.out.println("\n---------Account Information----------\n");
System.out.println("Account no.\t\tName\tBalance");
System.out.println(accNo + "\t" + name + "\t\t" + bal);
}
void depositMoney(int amount)
{
bal += amount;
}
void withdrawMoney(int amount)
{
try
{
if (bal - amount < 100)
{
throw new InsufficientBalanceException();
}
bal -= amount;
}
catch (Exception e)
{
System.out.println("\nLOW BALANCE");
}
}
}
public class Bank
{
public static void main(String[] args)throws WrongAccountException
{
Customer[] cust = new Customer[10];
cust[0] = new Customer(19103076, "Prince", 1000);
cust[1] = new Customer(19103078, "Rpen", 900);
cust[2] = new Customer(19103082, "Sil", 1000);
cust[3] = new Customer(19103083, "ayam", 500);
cust[4] = new Customer(19103084, "h", 1500);
cust[5] = new Customer(19103075, "a", 1200);
cust[6] = new Customer(19103022, "sh", 800);
cust[7] = new Customer(19103097, "s", 750);
cust[8] = new Customer(19103011, "d", 1100);
cust[9] = new Customer(19103087, "e", 200);
Customer obj = new Customer();
obj.checkBalance(cust);
Scanner sc = new Scanner(System.in);
System.out.println("\nWELCOME to our banking system!\n");
System.out.println("\nEnter the account number in which you want to persue the transaction. ");
int account;
int temp;
try
{
temp = sc.nextInt();
}
catch (Exception e)
{
sc.close();
throw new WrongAccountException();
}
account = temp;
int accountIndex = -1;
for (int i = 0; i < cust.length; i++)
{
if (cust[i].accNo == account)
{
accountIndex = i;
cust[i].getInfo();
}
}
try
{
if (accountIndex == -1)
{
sc.close();
throw new WrongAccountException();
}
}
catch (Exception e)
{
System.out.println("\nSorry! The account you mentioned does not exist!\n");
}
int t = 0;
System.out.println("Please enter your choice.");
do
{
if (accountIndex != -1)
{
System.out.println("1. Deposit\t2. Withdraw\t3. Exit");
int choice = sc.nextInt();
int amount = 0;
switch (choice)
{
case 1:
System.out.println("\nEnter amount to deposit : ");
amount = sc.nextInt();
cust[accountIndex].depositMoney(amount);
cust[accountIndex].getInfo();
break;
case 2:
System.out.println("\nEnter amount to withdraw : ");
amount = sc.nextInt();
cust[accountIndex].withdrawMoney(amount);
cust[accountIndex].getInfo();
break;
default:
t = 1;
break;
}
}
}while(t!=1);
sc.close();
System.out.println("\nThank you for banking with us! Have a good day!!\n");
}
}
