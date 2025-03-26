import java.util.Scanner;
public class loopconstructs4 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int no=0;
		int sum=0;
		do
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
			
		}while(no != -1);
		
		System.out.printf("The sum is %d\n", sum);

	}

}
