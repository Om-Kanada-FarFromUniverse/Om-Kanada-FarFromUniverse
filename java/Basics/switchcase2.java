import java.util.Scanner;
public class switchcase2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int wkday;
		System.out.print("Enter the weekday : ");
		wkday=sc.nextInt();
		switch(wkday)
		{
		
		case 1:		
		case 2:			
		case 3:			
		case 4:			
		case 5:
			System.out.println("Weekday");
			break;
		case 6:
		case 7:
			System.out.println("Weekend");
			break;
		default:
			System.out.println("Invalid weekday");
			break;
		}
	}

}
