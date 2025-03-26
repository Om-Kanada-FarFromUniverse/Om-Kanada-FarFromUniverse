import java.util.Scanner;
public class scanner1 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int a;

		System.out.print("Enter a number : ");
		a=sc.nextInt();
		System.out.println("The value in a is : " + a);

		float s;
		System.out.print("Enter a float : ");
		s=sc.nextFloat();
		System.out.println(s);
	}

}
