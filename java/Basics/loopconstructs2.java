import java.util.Scanner;
public class loopconstructs2 {

	public static void main(String[] args) {
			String str1, str2;
			Scanner sc=new Scanner(System.in);
			System.out.print("Enter a string : ");
			str1=sc.next();
			System.out.print("Enter a string : ");
			str2=sc.next();
			if(str1.equalsIgnoreCase(str2))
				System.out.printf("The strings are the same %s, %s",str1,str2);
			else
				System.out.printf("The strings are not the same : %s, %s\n",str1,str2);
			

	}

}
