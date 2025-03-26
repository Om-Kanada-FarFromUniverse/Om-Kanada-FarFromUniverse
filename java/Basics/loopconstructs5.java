import java.util.Scanner;

public class loopconstructs5 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int no=0;
		int sum=0;
		while(no != -1)
		{
			System.out.print("Enter a number : ");
			no=sc.nextInt();
			
			if(no < 1 || no > 20)
			{
				System.out.println("Going back");
				continue;
			}
			System.out.println("Adding up....");
			sum+=no;
			
		}
	}

}
