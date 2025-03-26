import java.util.Scanner;
public class Arrayasg1 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String str;
		String[] words;
		System.out.print("Enter a string : ");
		str=sc.nextLine();
		words=str.split(" ");
		for(String s : words)
		{
			System.out.println(s + " " +s.length());
		}
		
		for(int i=0;i<words.length;i++)
		{
			System.out.println(words[i]);
		}
			

	}

}
