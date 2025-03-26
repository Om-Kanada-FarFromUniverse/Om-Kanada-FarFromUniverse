import java.util.Scanner;
public class loopconstruct3 {
	public static void main(String[] args)
	{
		String str="";
		String s="";
		Scanner sc=new Scanner(System.in);
		while(!str.equals("end"))
		{
			System.out.print("Enter a string : ");
			str=sc.next();
			if(!str.equals("end"))
				s+=str+" ";
			
		}
		
		System.out.println(s);
	}
}
