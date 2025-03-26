import java.util.Scanner;
public class Strings1 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		String st="";
		int l;
		System.out.print("Enter a string  : ");
		st=sc.nextLine();
		l=st.length();
		for(int i=0;i<l;i++)
		{
			switch(st.charAt(i))
			{
				case 'A':
				case 'a':
				case 'E':
				case 'e':
				case 'I':
				case 'i':
				case 'O':
				case 'o':
				case 'U':
				case 'u':
					System.out.println(st.charAt(i) + " is a vowel");
					break;
				default:
					System.out.println(st.charAt(i) + " is a consonant, number or symbol");
					break;
					}
		}
		

	}

}
