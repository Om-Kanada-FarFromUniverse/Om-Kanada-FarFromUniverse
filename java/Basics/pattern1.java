import java.util.Scanner;
public class pattern1 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		int i, j;
		int n;
		System.out.println("Enter the number of rows : ");
		n=sc.nextInt();
		int x;
		for(i=n;i>=1;i--)
		{
			System.out.print(i+"-->");
			for(j=i;j>=1;j--)
			{
				System.out.print(j);
			}
			System.out.println();
		}
	}

}
