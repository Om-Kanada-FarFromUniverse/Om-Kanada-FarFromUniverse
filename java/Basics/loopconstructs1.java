import java.util.Scanner;
public class loopconstructs1 {
	public static void main(String[] args)
	{
		int a=0;
		int sum = 0;
		Scanner sc=new Scanner(System.in);
		while(a != -1)
		{
			System.out.print("Enter a number : ");
			a=sc.nextInt();
			if(a != -1)
				sum+=a;
		}
		
		System.out.printf("The sum is : %d\n",sum);
	}

}
